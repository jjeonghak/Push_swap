#include "push_swap.h"
#include<stdio.h>
void	sort_a(t_deque *a, t_deque *b)
{
	int		cnt;
	int		a_cnt;
	int		min_cnt;
	t_dlist	*temp;

	cnt = a->size + b->size;
	a_cnt = a->size;
	temp = find_min(b, &min_cnt);
	while (min_cnt--)
		rb(b);
	while (cnt--)
	{
		if (!a_cnt || b->size != 0 && b->tail->index < a->tail->index)
		{
			pa(a, b);
			ra(a);
		}
		else
		{
			ra(a);
			a_cnt--;
		}
	}
	return ;
}
