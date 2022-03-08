/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:10:44 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/17 16:28:51 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getstrip(char const *s1, char const *set, int flag)
{
	size_t	cnt;
	size_t	slen;

	slen = ft_strlen(s1);
	if (flag == 0)
		cnt = 0;
	else
		cnt = slen - 1;
	while (slen--)
	{
		if (ft_strchr(set, *(s1 + cnt)) == NULL)
			break ;
		if (flag == 0)
			cnt++;
		else if (cnt != 0)
			cnt--;
	}
	return (cnt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	head;
	size_t	tail;

	if (s1 == NULL)
		return (NULL);
	else if (set == NULL)
		return (ft_strdup(s1));
	head = ft_getstrip(s1, set, 0);
	tail = ft_getstrip(s1, set, 1);
	if (head >= tail)
		return (ft_strdup(""));
	ptr = (char *)malloc(tail - head + 2);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + head, tail - head + 2);
	return (ptr);
}
