#include "push_swap.h"
#include<stdio.h>
//스페이스 들어있는 인자 예외처리 필요
// "    " 1 2 3, "1 2 " 3 4 등
static void	clear_multi(char **multi)
{
	int	i;

	i = 0;
	while (*(multi + i) != NULL)
	{
		free(*(multi + i));
		i++;
	}
	free(multi);
	return ;
}

static long long	ft_atol(char *str, int *check)
{
	long long	result;
	long long	sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	if (*(str + i) == '-')
	{
		sign = -1;
		i++;
	}
	while (*(str + i) != '\0')
	{
		if (i > 11 || !ft_isdigit(*(str + i)))
		{
			*check = 1;
			break ;
		}
		result *= 10;
		result += *(str + i) - '0';
		i++;
	}
	return (result * sign);
}

static void	put_deque(char **temp, t_deque *a, int *check)
{
	long long	index;
	int			i;

	i = 0;
	while (*(temp + i) != NULL)
	{
		index = ft_atol(*(temp + i), check);
		if (*check != 0 || index > INTMAX || index < INTMIN)
		{
			*check = 1;
			return ;
		}
		ft_push_front(a, (int)index);
		i++;
	}
	return ;
}

void	parse_argv(char **argv, t_deque *a)
{
	char	**temp;
	int		i;
	int		check;

	i = 1;
	check = 0;
	while (*(argv + i) != NULL)
	{
		temp = ft_split(*(argv + i), ' ');
		put_deque(temp, a, &check);
		if (temp == NULL || check)
		{
			ft_clear(a);
			error();
		}
		clear_multi(temp);
		i++;
	}
	return ;
}
