
#include "libft.h"

// static void	s_zero(void *s, size_t n)
// {
// 	while (n--)
// 		*(unsigned char *)s++ = 0;
// }

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	if (count && n && count > (UINT_MAX / n))
		return (NULL);
	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (count * n));
	return (memory);
}
