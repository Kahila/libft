/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:40:56 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/21 08:57:44 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*			ft_strcat(char *s1, char *s2)
{
	int i;

	int len = ft_strlen(s1);
   	int totlen = ft_strlen(s2) + len;	
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i ] = '\0';
	return (s1);
}
