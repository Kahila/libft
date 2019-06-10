/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:59:55 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 09:06:33 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	int len;
	int len1;
	int i;

	i = 0;
	len = ft_strlen((char *)s1);
	len1 = ft_strlen((char *)s2);
	if (len != len1)
		return (0);
	while ((*s1 == *s2) && (*s1 != '\0' || *s2 != '\0'))
	{
		i++;
		s1++;
		s2++;
	}
	if (i == len)
		return (1);
	else
		return (0);
}
