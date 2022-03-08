/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:46:17 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/25 10:19:13 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst != NULL && new != NULL)
	{
		last_node = ft_lstlast(new);
		last_node->next = *lst;
		*lst = new;
	}
	return ;
}
