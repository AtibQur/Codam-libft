#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (0);
	i = start;
	j = 0;
	while (j < len && ft_strlen(s) >= start)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
