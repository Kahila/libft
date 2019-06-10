/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 05:50:15 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 12:55:00 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	const char *s1;
	const char *s2;

	if (*needle == '\0')
		return (char *)(hay);
	else if (len == 0)
		return (NULL);
	while (*hay != '\0')
	{
		if (len != 0)
		{
			s1 = hay;
			s2 = needle;
			while (*s1 == *s2++ && *s2++ != '\0')
				s1++;
			if (*s2 == '\0')
				return (char *)(hay);
			hay++;
			len--;
		}
		else
			break ;
	}
	return (NULL);
}
