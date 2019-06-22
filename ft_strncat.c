/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:40:56 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/22 04:59:15 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncat(char *s1, const char *s2, size_t l)
{
	size_t i;
	size_t len;

	len = ft_strlen(s1);
	i = 0;
	while (l > 0 && s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
		l--;
	}
	s1[len + i] = '\0';
	return (s1);
}
