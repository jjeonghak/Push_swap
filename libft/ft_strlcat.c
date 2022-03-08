/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:47:22 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/27 17:35:41 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstend;
	size_t	srcsize;
	size_t	cnt;

	dstend = ft_strlen(dst);
	srcsize = ft_strlen(src);
	cnt = 0;
	while (*(src + cnt) != '\0' && cnt + dstend + 1 < dstsize)
	{
		*(dst + dstend + cnt) = *(src + cnt);
		cnt++;
	}
	if (dstsize <= dstend)
		return (srcsize + dstsize);
	else
	{
		*(dst + (int)dstend + cnt) = '\0';
		return (srcsize + dstend);
	}
}
