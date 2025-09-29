#include "libft.h"

static size_t	int_len(int n)
{
	size_t      len;
	long long   nb;

	nb = (long long)n;
	len = (nb <= 0);
	while (nb != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t      len;
	char        *s;
	long long   nb;

	len = int_len(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	nb = (long long)n;
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	do {
		s[--len] = (char)('0' + (nb % 10));
		nb /= 10;
	} while (nb > 0);
	return (s);
}
