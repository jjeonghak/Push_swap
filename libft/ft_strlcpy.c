/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:47:50 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 13:55:47 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	totalsize;

	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		if (srcsize >= dstsize)
			totalsize = dstsize - 1;
		else
			totalsize = srcsize;
		ft_memcpy(dst, src, totalsize);
		*(dst + totalsize) = '\0';
	}
	return (srcsize);
}
