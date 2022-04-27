/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_func2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:43:09 by jeonghak          #+#    #+#             */
/*   Updated: 2022/03/08 13:06:22 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_empty(t_deque *dequeue)
{
	if (dequeue != NULL && dequeue->size == 0)
		return (1);
	return (0);
}

void	ft_clear(t_deque *dequeue)
{
	t_dlist	*temp;

	if (dequeue != NULL)
	{
		while (dequeue->head != NULL)
		{
			temp = dequeue->head->next;
			free(dequeue->head);
			dequeue->head = temp;
		}
		dequeue->tail = NULL;
		dequeue->size = 0;
	}
	return ;
}

void	ft_error(t_deque *dequeue)
{
	ft_clear(dequeue);
	if (dequeue != NULL)
		free(dequeue);
	exit(1);
	return ;
}
