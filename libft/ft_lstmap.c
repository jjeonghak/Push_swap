/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:02:17 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/21 16:18:57 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*now_node;
	t_list	*next_node;
	t_list	*start_node;

	if (lst != NULL && f != NULL)
	{
		start_node = ft_lstnew(f(lst->content));
		if (start_node == NULL)
			return (NULL);
		now_node = start_node;
		while (lst->next)
		{
			lst = lst->next;
			next_node = ft_lstnew(f(lst->content));
			if (next_node == NULL)
			{
				ft_lstclear(&start_node, del);
				return (NULL);
			}
			now_node->next = next_node;
			now_node = next_node;
		}
		return (start_node);
	}
	return (NULL);
}
