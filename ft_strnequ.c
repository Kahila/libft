/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:43:57 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 12:46:17 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int len;
	unsigned int len1;
	unsigned int i;

	i = 0;
	len = ft_strlen((char *)s1);
	len1 = ft_strlen((char *)s2);
	while (n != 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 == *s2)
			i++;
		else
			return (0);
		n--;
		s1++;
		s2++;
	}
	return (1);
}
