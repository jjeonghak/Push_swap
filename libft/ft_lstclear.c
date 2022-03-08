/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:47:49 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/19 10:47:50 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now_node;
	t_list	*next_node;

	if (lst != NULL && del != NULL)
	{
		now_node = *lst;
		while (now_node != NULL)
		{
			next_node = now_node->next;
			ft_lstdelone(now_node, del);
			now_node = next_node;
		}
		*lst = NULL;
	}
	return ;
}
