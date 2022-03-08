/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghak <rlawjdgks318@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:52:28 by jeonghak          #+#    #+#             */
/*   Updated: 2021/11/21 15:10:41 by jeonghak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_error(char **ptr)
{
	size_t	cnt;

	cnt = 0;
	while (*(ptr + cnt) != NULL)
	{
		free(*(ptr + cnt));
		cnt++;
	}
	free(ptr);
	return (NULL);
}

static size_t	ft_get_row(char const *s, char c)
{
	size_t	cnt;
	size_t	subcnt;
	size_t	i;

	cnt = 0;
	subcnt = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			if (subcnt != 0)
			{
				cnt++;
				subcnt = 0;
			}
		}
		else
			subcnt++;
		i++;
	}
	if (i != 0 && *(s + i - 1) != c)
		cnt++;
	return (cnt);
}

static char	**ft_set_idx(char **ptr, char const *s, char c, size_t rowcnt)
{
	size_t	cnt;
	size_t	i;
	size_t	j;

	cnt = 0;
	i = 0;
	j = 0;
	while (j < rowcnt)
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		while (*(s + i + cnt) != c && *(s + i + cnt) != '\0')
			cnt++;
		*(ptr + j) = (char *)malloc(cnt + 1);
		if (*(ptr + j) == NULL)
			return (ft_error(ptr));
		ft_memcpy(*(ptr + j), s + i, cnt);
		*(*(ptr + j) + cnt) = '\0';
		i += cnt;
		cnt = 0;
		j++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	rowcnt;

	if (s == NULL)
		return (NULL);
	rowcnt = ft_get_row(s, c);
	ptr = (char **)malloc(sizeof(char *) * (rowcnt + 1));
	if (ptr == NULL)
		return (NULL);
	*(ptr + rowcnt) = NULL;
	ptr = ft_set_idx(ptr, s, c, rowcnt);
	return (ptr);
}
