/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:53:21 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/16 15:53:24 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cnt;
	size_t			slen;
	char			*ptr;

	if (s == NULL || f == NULL)
		return (NULL);
	slen = ft_strlen(s);
	ptr = (char *)malloc(slen + 1);
	if (ptr == NULL)
		return (NULL);
	cnt = 0;
	*(ptr + slen) = '\0';
	while (*(s + cnt) != '\0')
	{
		*(ptr + cnt) = f(cnt, *(s + cnt));
		cnt++;
	}
	return (ptr);
}
