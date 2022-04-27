#include "push_swap.h"

void	sa(t_deque *a)
{
	swap(a);
	ft_putstr_fd("sa\n", 1);
	return ;
}

void	sb(t_deque *b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	ss(t_deque *a, t_deque *b)
{
	swap(a);
	swap(b);
	ft_putstr_fd("ss\n", 1);
	return ;
}

void	pa(t_deque *a, t_deque *b)
{
	push(a, b);
	ft_putstr_fd("pa\n", 1);
	return ;
}

void	pb(t_deque *a, t_deque *b)
{
	push(b, a);
	ft_putstr_fd("pb\n", 1);
	return ;
}
