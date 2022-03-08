/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:04:11 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 18:53:02 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cnt;

	if (s != NULL && f != NULL)
	{
		cnt = 0;
		while (*(s + cnt) != '\0')
		{
			f(cnt, s + cnt);
			cnt++;
		}
	}
	return ;
}
