#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	i = 0;
	cs = (unsigned char *)s;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}