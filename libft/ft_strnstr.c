/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:49:27 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/30 11:49:25 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == NULL && len == 0 && needle != NULL)
		return (NULL);
	while (i <= len)
	{
		if (*(needle + j) == '\0')
			return ((char *)haystack + i - j);
		else if (*(haystack + i) == '\0')
			break ;
		if (*(haystack + i) == *(needle + j))
			j++;
		else
		{
			if (*(haystack + i) == *needle)
				j = 1;
			else
				j = 0;
		}
		i++;
	}
	return (NULL);
}
