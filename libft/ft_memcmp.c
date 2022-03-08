/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:44:50 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/13 23:44:51 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			cnt;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	cnt = 0;
	while (cnt < n)
	{
		if (*(ptr1 + cnt) != *(ptr2 + cnt))
			return (*(ptr1 + cnt) - *(ptr2 + cnt));
		cnt++;
	}
	return (0);
}
