#include "push_swap.h"

void	sort_a(t_deque *a, t_deque *b)
{
	while (b->size != 0)
	{
		if (b->tail->index < a->tail->index)
		{
			pa(a, b);
			ra(a);
		}
		else
			ra(a);
	}
	return ;
}
