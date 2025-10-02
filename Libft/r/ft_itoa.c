/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:10:15 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/30 11:10:15 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t		len;
	long long	nb;

	nb = (long long)n;
	len = (nb <= 0);
	while (nb != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*s;
	long long	nb;

	len = int_len(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	nb = (long long)n;
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (len-- > 0 && nb >= 0)
	{
		s[len] = (char)('0' + (nb % 10));
		nb /= 10;
		if (nb == 0)
			break ;
	}
	return (s);
}
