#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 > (size_t)-1 - len2 - 1)
		return (NULL);
	total = len1 + len2 + 1;

	str = (char *)malloc(total);
	if (!str)
		return (NULL);

	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2);
	str[total - 1] = '\0';
	return (str);
}