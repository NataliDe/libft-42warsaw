#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0
			&& (i + ft_strlen(needle) - 1) < len)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}