/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:56:29 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/24 09:55:55 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**new;

	j = ft_count((char *)s, c) + 1;
	if (!s || !(new = (char **)malloc(sizeof(char *) * j)) || !c)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(new[i] = ft_memalloc(ft_find_len(s, c) + 1)))
				return (NULL);
			j = 0;
			while (*s != '\0' && *s != c)
				new[i][j++] = (char)*s++;
			new[i++][j] = '\0';
		}
	}
	new[i] = NULL;
	return (new);
}
