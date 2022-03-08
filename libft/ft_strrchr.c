/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:49:53 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 12:33:30 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ptr = s;
		s++;
	}
	if ((char)c == '\0')
		ptr = s;
	return ((char *)ptr);
}
