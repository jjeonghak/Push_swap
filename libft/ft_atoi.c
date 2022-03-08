/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:57:28 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/26 12:15:42 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

static long long	ft_set_limit(int s, long long r, char str, int *c)
{
	long long	temp;

	temp = 10 * r + str - '0';
	if (s == 1 && temp < r)
	{
		*c = 1;
		return (-1);
	}
	else if (s == -1 && (long long)s * temp > (long long)s * r)
	{
		*c = 1;
		return (0);
	}
	else
		return (temp);
}

int	ft_atoi(const char *str)
{
	int			sign;
	int			check;
	long long	result;

	sign = 1;
	check = 0;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = ft_set_limit(sign, result, *str, &check);
		if (check)
			break ;
		str++;
	}
	return (sign * (int)result);
}
