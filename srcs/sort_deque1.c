#include "push_swap.h"
#include<stdio.h>
t_dlist	*find_min(t_deque *b, int *min_cnt)
{
	int		cnt;
	t_dlist	*temp;
	t_dlist *min_index;

	cnt = 0;
	temp = b->tail;
	min_index = b->tail;
	while (cnt < b->size)
	{
		if (temp->index <= min_index->index)
		{
			min_index = temp;
			*min_cnt = cnt;
		}
		temp = temp->previous;
		cnt++;
	}
	return (min_index);
}

static int	cal_dest(t_deque *b, int index)
{
	int		cnt;
	int		min_cnt;
	t_dlist	*min_index;

	cnt = 0;
	min_index = find_min(b, &min_cnt);
	while (cnt < b->size)
	{
		if (min_index->index > index)
			break ;
		else if (min_index->previous == NULL)
			min_index = b->tail;
		else
			min_index = min_index->previous;
		cnt++;
	}
	return ((cnt + min_cnt) % b->size);
}

static void	cal_pb(t_deque *b, int index)
{
	int	dest;
	int	cnt_r;
	
	dest = 0;
	if (b->size != 0)
		dest = cal_dest(b, index);
	cnt_r = b->size - dest;
	if (cnt_r > dest)
	{
		while (dest)
		{
			rb(b);
			dest--;
		}
	}
	else
	{
		while (cnt_r)
		{
			rrb(b);
			cnt_r--;
		}
	}
	return ;
}

static void	sort_b(t_deque *a, t_deque *b, int end_index, int *lis)
{
	int		cnt;
	t_dlist	*temp;

	cnt = a->size;
	temp = a->tail;
	while (cnt)
	{
		if (!bs(temp->index, 0, end_index, lis))
		{
			cal_pb(b, temp->index);
			temp = temp->previous;
			pb(a, b);
		}
		else
		{
			temp = temp->previous;
			ra(a);
		}
		cnt--;
	}
	return ;
}

void	sort_deque(t_deque *a, t_deque *b)
{
	int	*lis;
	int	*i_arr;
	int	end_index;

	i_arr = (int *)malloc(sizeof(int) * a->size);
	end_index = cal_lis(-1, 0, i_arr, a);
	lis = (int *)malloc(sizeof(int) * end_index);
	make_lis(a, lis, i_arr, end_index);
	free(i_arr);
	sort_b(a, b, end_index, lis);
	free(lis);
	sort_a(a, b);
	return ;
}
