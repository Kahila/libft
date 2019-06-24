/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:15:33 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/24 10:04:58 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *str)
{
	int		end;
	char	*new;
	int		j;

	if (!str)
		return (NULL);
	j = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	end = ft_strlen((char *)str) - 1;
	if (end < 0)
		return ((char *)str);
	while (str[end] == ' ' || str[end] == '\t' || str[end] == '\n')
		end--;
	new = ft_memalloc(end + 2);
	if (!new)
		return (NULL);
	while (end >= 0 && new != NULL)
	{
		new[j] = str[j];
		j++;
		end--;
	}
	new[j] = '\0';
	return (new);
}
