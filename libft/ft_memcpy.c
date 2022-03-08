/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:45:11 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/13 23:45:17 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (dst == NULL && src == NULL)
		return (dst);
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n--)
		*ptr1++ = *ptr2++;
	return (dst);
}
