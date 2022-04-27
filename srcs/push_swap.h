/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:49:53 by jeonghak          #+#    #+#             */
/*   Updated: 2022/04/27 11:08:31 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define INTMAX 2147483647
# define INTMIN -2147483648

typedef struct s_dlist
{
	int				index;
	struct s_dlist	*previous;
	struct s_dlist	*next;
}				t_dlist;

typedef struct s_deque
{
	size_t	size;
	t_dlist	*head;
	t_dlist	*tail;
}				t_deque;

/*
***************************   PUSH_SWAP COMMANDS   ****************************
*/

void	sa(t_deque *a);
void	sb(t_deque *b);
void	ss(t_deque *a, t_deque *b);
void	pa(t_deque *a, t_deque *b);
void	pb(t_deque *a, t_deque *b);
void	ra(t_deque *a);
void	rb(t_deque *b);
void	rr(t_deque *a, t_deque *b);
void	rra(t_deque *a);
void	rrb(t_deque *b);
void	rrr(t_deque *a, t_deque *b);

/*
***************************   PUSH_SWAP FUNCTION   ****************************
*/

void	push(t_deque *deque1, t_deque *deque2);
void	reverse_rotate(t_deque *dequeue);
void	rotate(t_deque *dequeue);
void	swap(t_deque *dequeue);

/*
*****************************   DEQUE FUNCTION   ******************************
*/

int		ft_empty(t_deque *dequeue);

void	ft_clear(t_deque *dequeue);
void	ft_error(t_deque *dequeue);
void	ft_pop_back(t_deque *dequeue);
void	ft_pop_front(t_deque *dequeue);
void	ft_push_back(t_deque *dequeue, int value);
void	ft_push_front(t_deque *dequeue, int value);

/*
*****************************     PARSE ARGV     ******************************
*/

void	parse_argv(char **argv, t_deque *dequeue);

/*
*****************************     SORT DEQUE     ******************************
*/

void	sort_deque(t_deque *a, t_deque *b);
void	make_lis(int *lis, t_deque *a);

/*
*****************************        UTILS       ******************************
*/

int		bs(int index, int lb, int rb, int *lis);

void	error(void);

#endif
