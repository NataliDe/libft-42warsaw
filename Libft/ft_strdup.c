#include "libft.h"  /* переконайся, що через нього підключено <stdlib.h> для malloc */

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	if (len + 1 == 0)
		return (NULL);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len + 1);
	return (dup);
}
