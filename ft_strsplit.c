/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:56:29 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/16 19:37:02 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
    int     j;
	char	**new;

	i = 0;
    j = 0;
	if (!s || (!(new = (char **)malloc(sizeof(char *) * (ft_count((char *)s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(new[i] = ft_memalloc(ft_find_len(s, c) + 1)))
				return (NULL);
			while (*s != '\0' && *s != c)
				new[i][j++] = (char)*s++;
			new[i++][j] = '\0';
			j = 0;
		}
	}
	new[i] = NULL;
	return (new);
}
