/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:51:34 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 15:40:50 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	prelen;
	size_t	suflen;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	prelen = ft_strlen(s1);
	suflen = ft_strlen(s2);
	ptr = (char *)malloc(prelen + suflen + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, prelen);
	ft_strlcpy(ptr + prelen, s2, suflen + 1);
	return (ptr);
}
