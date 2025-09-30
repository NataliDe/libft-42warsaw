/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:29:23 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/30 11:29:23 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	st;
	size_t	sub_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	st = (size_t)start;
	if (st >= s_len)
	{
		sub = (char *)malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub_len = s_len - st;
	if (sub_len > len)
		sub_len = len;

	sub = (char *)malloc(sub_len + 1);
	if (!sub)
		return (NULL);

	ft_memcpy(sub, s + st, sub_len);
	sub[sub_len] = '\0';
	return (sub);
}
