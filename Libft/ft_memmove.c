/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:56:06 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/30 12:50:26 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	
	if (!dst && !src)
    return (NULL);
	if (src == dst)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s < d && s + len > d)
		while (len--)
			d[len] = s[len];
	else
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
