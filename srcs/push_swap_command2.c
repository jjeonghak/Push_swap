#include "push_swap.h"

void	ra(t_deque *a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	rb(t_deque *b)
{
	rotate(b);
	ft_putstr_fd("rb\n", 1);
	return ;
}

void	rr(t_deque *a, t_deque *b)
{
	rotate(a);
	rotate(b);
	ft_putstr_fd("rr\n", 1);
	return ;
}
