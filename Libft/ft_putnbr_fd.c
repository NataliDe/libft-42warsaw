/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:23:56 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/30 11:23:56 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_long(long nb, int fd)
{
	char	c;

	if (nb >= 10)
		putnbr_long(nb / 10, fd);
	c = (char)('0' + (nb % 10));
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	if (fd < 0)
		return ;
	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	putnbr_long(nb, fd);
}

