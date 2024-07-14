
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		size;

	size = ft_strlen(s) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, size);
	return (dest);
}
