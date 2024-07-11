#include "ft_pipex.h"

static char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (0);
}

char	*ft_strtok(char *str, const char *delim)
{
	static char	*last;
	char		*token_start;

	if (str == NULL)
		str = last;
	if (str == NULL)
		return (NULL);
	while (*str && ft_strchr(delim, *str))
		str++;
	if (*str == '\0')
		return NULL;
	token_start = str;
	while (*str && !ft_strchr(delim, *str))
		str++;
	if (*str)
	{
		*str = '\0';
		last = str + 1;
	}
	else
		last = NULL;
	return (token_start);
}