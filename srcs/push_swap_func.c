/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:44:49 by jeonghak          #+#    #+#             */
/*   Updated: 2022/03/08 12:44:52 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_deque *dequeue)
{
	int	temp;

	if (dequeue != NULL && dequeue->size > 1)
	{
		temp = dequeue->tail->index;
		dequeue->tail->index = dequeue->tail->previous->index;
		dequeue->tail->previous->index = temp;
	}
	return ;
}

void	push(t_deque *deque1, t_deque *deque2)
{
	if (deque1 != NULL && deque2 != NULL && deque2->tail != NULL)
	{
		ft_push_back(deque1, deque2->tail->index);
		ft_pop_back(deque2);
	}
	return ;
}

void	rotate(t_deque *dequeue)
{
	if (dequeue != NULL && dequeue->size > 1)
	{
		ft_push_front(dequeue, dequeue->tail->index);
		ft_pop_back(dequeue);
	}
	return ;
}

void	reverse_rotate(t_deque *dequeue)
{
	if (dequeue != NULL && dequeue->size > 1)
	{
		ft_push_back(dequeue, dequeue->head->index);
		ft_pop_front(dequeue);
	}
	return ;
}
