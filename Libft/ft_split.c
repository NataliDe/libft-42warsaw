/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:24:47 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/30 11:24:47 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s && *s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
	}
	return (count);
}

static char	*getword(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

static void	*free_partial(char **arr, size_t n)
{
	size_t	i;

	i = 0;

	while (i < n)
	{
		free(arr[i]);
		++i;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	k;
	size_t	wc;

	if (!s)
		return (NULL);
	wc = wordcount(s, c);
	split = (char **)malloc((wc + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			++i;
		if (!s[i])
			break ;
		split[k] = getword(s + i, c);
		if (!split[k])
			return (free_partial(split, k));
		while (s[i] && s[i] != c)
			++i;
		++k;
	}
	split[k] = NULL;
	return (split);
}
