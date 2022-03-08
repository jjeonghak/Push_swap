/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:40:54 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/21 15:40:48 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	cnt;

	if (n > 0)
		cnt = 0;
	else
		cnt = 1;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	size_t	nlen;
	char	*ptr;

	nlen = ft_intlen(n);
	ptr = (char *)malloc(nlen + 1);
	if (ptr == NULL)
		return (NULL);
	*(ptr + nlen) = '\0';
	if (n < 0)
	{
		*ptr = '-';
		nlen--;
	}
	while (nlen--)
	{
		if (n < 0)
			*(ptr + nlen + 1) = -(n % 10) + '0';
		else
			*(ptr + nlen) = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}
