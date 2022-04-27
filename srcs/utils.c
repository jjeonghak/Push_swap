#include "push_swap.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	bs(int index, int lb, int rb, int *lis)
{
	int	mid;

	while (lb <= rb)
	{
		mid = (lb + rb) / 2;
		if (*(lis + mid) == index)
			return (1);
		else if (*(lis + mid) > index)
			rb = mid;
		else
			lb = mid + 1;
	}
	return (0);
}
