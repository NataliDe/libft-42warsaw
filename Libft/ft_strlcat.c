/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:58:28 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/10/06 13:34:26 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dlen = 0;
	slen = 0;
	while (dst[dlen] && dlen < dstsize)
		dlen++;
	while (src[slen])
		slen++;
	if (dlen == dstsize)
		return (dstsize + slen);
	i = 0;
	while (src[i] && (dlen + i + 1) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < dstsize)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}
