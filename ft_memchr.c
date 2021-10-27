#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_char;
	size_t	i;

	s_char = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == (char)c)
			return ((void *)&s_char[i]);
		i++;
	}
	return (NULL);
}
