#include "ft_pipex.h"
#include "./ft_printf/include/ft_printf.h"

void	execute_cmd(char *cmd, int fd_in, int fd_out)
{
	char	*args[100];
	char	*token;
	int		i;

	i = 0;
	token = strtok(cmd, " ");
	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
	if (fd_in != -1)
	{
		dup2(fd_in, STDIN_FILENO);
		close(fd_in);
	}
	if (fd_out != -1)
	{
		dup2(fd_out, STDOUT_FILENO);
		close(fd_out);
	}
	execvp(args[0], args);
	error_msg("execvp");
}

void	pipex(char *file1, char *cmd1, char *cmd2, char *file2)
{
	int		pipe_fd[2];
	int		fd_in;
	int		fd_out;
	pid_t	pid1; 
	pid_t	pid2;

	if (pipe(pipe_fd) == -1)
		error_msg("pipe");
	pid1 = fork();
	if (pid1 == -1)
		error_msg("fork");
	if (pid1 == 0)
		fd_input(fd_in, file1, pipe_fd, cmd1);
	pid2 = fork();
	if (pid2 == -1)
		error_msg("fork");
	if (pid2 == 0)
		fd_output(fd_out, file2, pipe_fd, cmd2);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
}

int	main(int argc, char *argv[])
{
	if (argc != 5)
	{
		ft_printf("Usage: %s <file1> <cmd1> <cmd2> <file2>\n", argv[0]);
		return 1;
	}
	pipex(argv[1], argv[2], argv[3], argv[4]);
	return 0;
}