#include "push_swap.h"

static int	cal_dest(t_deque *b, int index)
{
	int		cnt;
	t_dlist	*temp;

	cnt = 0;
	temp = b->head;
	while (temp)
	{
		if (temp->index < index)
			break ;
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}

static void	cal_pb(t_deque *b, int index)
{
	int	dest;
	int	cnt_r;

	dest = cal_dest(b, index);
	cnt_r = b->size - dest;
	if (cnt_r > dest)
	{
		while (dest)
		{
			rrb(b);
			dest--;
		}
	}
	else
	{
		while (cnt_r)
		{
			rb(b);
			cnt_r--;
		}
	}
	return ;
}

static void	sort_b(t_deque *a, t_deque *b, int *lis)
{
	int		rb;
	t_dlist	*temp;

	rb = a->size - 1;
	temp = a->head;
	while (temp)
	{
		if (!bs(temp->index, 0, rb, lis))
		{
			cal_pb(b, temp->index);
			pb(a, b);
		}
		else
			ra(a);
		temp = temp->next;
	}
	return ;
}

static void	sort_a(t_deque *a, t_deque *b)
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

void	sort_deque(t_deque *a, t_deque *b)
{
	int	*lis;

	make_lis(lis, a);
	sort_b(a, b, lis);
	free(lis);
	sort_a(a, b);
	return ;
}
