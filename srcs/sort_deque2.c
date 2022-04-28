#include "push_swap.h"
#include<stdio.h>
static void	init(int *arr, int *lis, int *i_arr, t_deque *a)
{
	int		i;
	t_dlist	*temp;

	i = 0;
	*(i_arr) = 0;
	temp = a->tail;
	while (i != a->size)
	{
		*(arr + i) = temp->index;
		temp = temp->previous;
		i++;
	}
	*lis = *arr;
	return ;
}

static int	upper_bound(int *lis, int target, int size)
{
	int	mid;
	int	start;
	int	end;

	start = 0;
	end = size;
	while (end > start)
	{
		mid = (start + end) / 2;
		if (*(lis + mid) > target)
			end = mid;
		else
			start = mid + 1;
	}
	return (end);
}

int	cal_lis(int i, int index, int *i_arr, t_deque *a)
{
	int	upper_index;
	int	*lis;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * a->size);
	lis = (int *)malloc(sizeof(int) * a->size);
	init(arr, lis, i_arr, a);
	while (++i < a->size)
	{
		if (*(lis + index) < *(arr + i))
		{
			index++;
			*(lis + index) = *(arr + i);
			*(i_arr + i) = index;
		}
		else
		{
			upper_index = upper_bound(lis, *(arr + i), index);
			*(lis + upper_index) = *(arr + i);
			*(i_arr + i) = upper_index;
		}
	}
	free(lis);
	free(arr);
	return (index);
}

void	make_lis(t_deque *a, int *lis, int *i_arr, int end_index)
{
	int		i;
	int		index;
	t_dlist	*temp;

	i = a->size - 1;
	index = end_index;
	temp = a->head;
	while (temp)
	{
		if (index == *(i_arr + i))
		{
			*(lis + index) = temp->index;
			index--;
		}
		temp = temp->next;
		i--;
	}
	return ;
}
