/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:07:03 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/22 04:55:03 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcpy(char *s1, const char *s2)
{
	int count;

	count = 0;
	while (s2[count] != '\0')
	{
		s1[count] = s2[count];
		count++;
	}
	s1[count] = '\0';
	return (s1);
}
