#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1) + 1;
	ptr = malloc(size);
	if (ptr)
	{
		ft_memcpy(ptr, s1, size);
	}
	return (ptr);
}
