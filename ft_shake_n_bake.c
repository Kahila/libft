/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shake_n_bake.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:20:51 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/15 16:47:43 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_shake_n_bake(char const *str, unsigned char bake)
{
	int		c;
	int		l;
	int		len;
	char	*new;

	len = ft_strlen((char *)str);
	len--;
	while (str[len] == (char)bake)
		len--;
	l = 0;
	while (str[l] == (char)bake)
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
