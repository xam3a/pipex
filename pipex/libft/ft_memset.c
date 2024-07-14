
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}
