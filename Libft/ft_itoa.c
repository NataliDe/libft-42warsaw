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


static size_t	ft_intlen(int n)
{
	size_t		len;
	long long	nb;

	nb = (long long)n;
	len = (nb <= 0);
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		len;
	long long	nb;

	len = ft_intlen(n);
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
	if (nb == 0)
		s[--len] = '0';
	while (nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}


