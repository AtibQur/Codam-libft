#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;

	p = str;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (str);
}
