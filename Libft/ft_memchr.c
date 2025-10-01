/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:21:40 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/30 11:21:40 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cs;
	size_t			i;

	i = 0;
	cs = (const unsigned char *)s;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return ((void *)(сs + i));
		i++;
	}
	return (NULL);
}

