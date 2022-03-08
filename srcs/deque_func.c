/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:42:32 by jeonghak          #+#    #+#             */
/*   Updated: 2022/03/08 12:42:41 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_front(t_deque *dequeue, int value)
{
	t_dlist	*node;

	if (dequeue != NULL)
	{
		node = malloc(sizeof(t_dlist));
		if (node == NULL)
			ft_error(dequeue);
		node->index = value;
		node->previous = NULL;
		if (dequeue->head != NULL)
		{
			node->next = dequeue->head;
			dequeue->head->previous = node;
		}
		else
			dequeue->tail = node;
		dequeue->head = node;
		dequeue->size += 1;
	}
	return ;
}

void	ft_push_back(t_deque *dequeue, int value)
{
	t_dlist	*node;

	if (dequeue != NULL)
	{
		node = malloc(sizeof(t_dlist));
		if (node == NULL)
			ft_error(dequeue);
		node->index = value;
		node->next = NULL;
		if (dequeue->tail != NULL)
		{
			node->previous = dequeue->tail;
			dequeue->tail->next = node;
		}
		else
			dequeue->head = node;
		dequeue->tail = node;
		dequeue->size += 1;
	}
	return ;
}

void	ft_pop_front(t_deque *dequeue)
{
	if (dequeue != NULL && dequeue->size > 0)
	{
		if (dequeue->size == 1)
		{
			free(dequeue->head);
			dequeue->tail = NULL;
			dequeue->head = NULL;
		}
		else
		{
			dequeue->head = dequeue->head->next;
			free(dequeue->head->previous);
			dequeue->head->previous = NULL;
		}
		dequeue->size -= 1;
	}
	return ;
}

void	ft_pop_back(t_deque *dequeue)
{
	if (dequeue != NULL && dequeue->size > 0)
	{
		if (dequeue->size == 1)
		{
			free(dequeue->tail);
			dequeue->tail = NULL;
			dequeue->head = NULL;
		}
		else
		{
			dequeue->tail = dequeue->tail->previous;
			free(dequeue->tail->next);
			dequeue->tail->next = NULL;
		}
		dequeue->size -= 1;
	}
	return ;
}
