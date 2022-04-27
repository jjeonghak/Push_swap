#include "push_swap.h"

static void	init(int *lis, int *arr, t_deque *a)
{
	int		i;
	t_dlist	*temp;

	i = 0;
	temp = a->tail;
	lis = (int *)malloc(sizeof(int) * a->size);
	arr = (int *)malloc(sizeof(int) * a->size);
	while (i != a->size)
	{
		*(lis + i) = 0;
		*(arr + i) = temp->index;
		temp = temp->previous;
		i++;
	}
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

void	make_lis(int *lis, t_deque *a)
{
	int	i;
	int	j;
	int	k;
	int	*arr;

	init(lis, arr, a);
	i = 0;
	j = 0;
	*(lis + i) = *(arr + i);
	i++;
	while (i < a->size)
	{
		if (*(lis + j) < *(arr + i))
		{
			j++;
			*(lis + j) = *(arr + i);
		}
		else
		{
			k = upper_bound(arr, *(arr + i), j);
			*(lis + k) = *(arr + i);
		}
		i++;
	}
	return ;
}
