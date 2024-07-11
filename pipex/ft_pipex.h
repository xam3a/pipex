#ifndef FT_PIPEX_H
# define FT_PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <errno.h>
# include <string.h>
# include <aio.h>

void	pipex(char *file1, char *cmd1, char *cmd2, char *file2);
void	execute_cmd(char *cmd, int fd_in, int fd_out);
char	*ft_strtok(char *str, const char *delim);
void	fd_input(int fd_in, char *file1, int *pipe_fd, char *cmd1);
void	fd_output(int fd_out, char *file2, int *pipe_fd, char *cmd2);
void	error_msg(char *msg);

#endif