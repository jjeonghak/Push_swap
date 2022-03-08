/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:52:56 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 15:18:54 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (len != 0)
	{
		if (dst < src)
		{
			while (len--)
				*ptr1++ = *ptr2++;
		}
		else if (dst > src)
		{
			while (len--)
				*(ptr1 + len) = *(ptr2 + len);
		}
	}
	return (dst);
}
