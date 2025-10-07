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

static size_t	skip_char(char const *s, char c, size_t i, int negated)
{
	if (negated)
		while (s[i] && s[i] != c)
			i++;
	else
		while (s[i] && s[i] == c)
			i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	k;

	if (!s)
		return (NULL);
	split = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		i = skip_char(s, c, i, 0);
		if (!s[i])
			break ;
		split[k] = getword(s + i, c);
		if (!split[k])
			return (free_partial(split, k));
		i = skip_char(s, c, i, 1);
		k++;
	}
	split[k] = NULL;
	return (split);
}
