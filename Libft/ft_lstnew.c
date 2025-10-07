/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndemkiv <ndemkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:57:46 by ndemkiv           #+#    #+#             */
/*   Updated: 2025/10/07 16:47:41 by ndemkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node_new;

	node_new = malloc(sizeof(t_list));
	if (!node_new)
		return (0);
	node_new->content = content;
	node_new->next = NULL;
	return (node_new);
}
