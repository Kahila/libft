/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:15:33 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/12 15:15:38 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *str)
{
	int		c;
	int		l;
	int		len;
	char	*new;

	len = ft_strlen((char *)str);
	len--;
	while ((str[len] == '\t' || str[len] == '\n' || str[len] == ' ') && len > 0)
		len--;
	l = 0;
	while (str[l] == '\t' || str[l] == '\n' || str[l] == ' ')
		l++;
	new = ft_memalloc(len);
	if (len > 0)
	{
		c = 0;
		while (l <= (len) && len != 0)
		{
			new[c] = str[l];
			l++;
			c++;
		}
		new[c] = '\0';
	}
	return (new);
}
