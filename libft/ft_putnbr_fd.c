/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:12:47 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 10:12:51 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_nbr(int n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	c = n % 10 + '0';
	ft_print_nbr(n / 10, fd);
	write(fd, &c, 1);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd >= 0)
	{
		if (n < 0)
		{
			c = -(n % 10) + '0';
			write(fd, "-", 1);
			ft_print_nbr(-(n / 10), fd);
			write(fd, &c, 1);
		}
		else if (n == 0)
			write(fd, "0", 1);
		else
			ft_print_nbr(n, fd);
	}
	return ;
}
