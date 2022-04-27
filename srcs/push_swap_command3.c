#include "push_swap.h"

void	rra(t_deque *a)
{
	reverse_rotate(a);
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	rrb(t_deque *b)
{
	reverse_rotate(b);
	ft_putstr_fd("rrb\n", 1);
	return ;
}

void	rrr(t_deque *a, t_deque *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr_fd("rrr\n", 1);
	return ;
}
