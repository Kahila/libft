/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 05:50:15 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/14 09:03:54 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *hay, const char *needle, size_t size)
{
	const char	*s1;
	const char	*s2;
	size_t		s;

	if (*needle == '\0')
		return (char *)(hay);
	while (*hay != '\0' && size > 0)
	{
		s1 = hay;
		s2 = needle;
		s = size;
		while (*s2 != '\0' && *s1 == *s2 && s > 0)
		{
			s1++;
			s2++;
			s--;
		}
		if (*s2 == '\0')
			return ((char *)hay);
		hay++;
		size--;
	}
	return (0);
}
