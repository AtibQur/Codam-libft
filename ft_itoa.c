#include "libft.h"

int	ft_numberlength(int nbr)
{
	int	nbr_length;

	nbr_length = 0;
	if (nbr == 0)
		nbr_length = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		nbr_length++;
	}
	while (nbr >= 1)
	{
		nbr = nbr / 10;
		nbr_length++;
	}
	return (nbr_length);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	int		nbr;

	nbr = n;
	len = ft_numberlength(n);
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len--] = '\0';
	if (nbr == 0)
		ptr[0] = '0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	while (len >= 0 && nbr != 0)
	{
		ptr[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}
