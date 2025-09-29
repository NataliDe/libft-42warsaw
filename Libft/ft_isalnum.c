/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:05:32 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/09/29 18:59:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

	{
	int	ft_isalpha;
	int	ft_isnum;

	ft_isalpha = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	ft_isnum = (c >= '0' && c <= '9');
	return (ft_isalpha || ft_isnum);
}
