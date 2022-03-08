/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:46:28 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/19 10:46:28 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
			ft_lstlast(*lst)->next = new;
	}
	return ;
}
