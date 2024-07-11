#include "ft_pipex.h"

void	fd_input(int fd_in, char *file1, int *pipe_fd, char *cmd1)
{
	fd_in = open(file1, O_RDONLY);
	if (fd_in < 0)
		error_msg("open file1");
	close(pipe_fd[0]);
	execute_cmd(cmd1, fd_in, pipe_fd[1]);
}

void	fd_output(int fd_out, char *file2, int *pipe_fd, char *cmd2)
{
	fd_out = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_out < 0)
		error_msg("open file2");
	close(pipe_fd[1]);
	execute_cmd(cmd2, pipe_fd[0], fd_out);
}

void	error_msg(char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}