/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 05:50:15 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/13 03:49:13 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	const char *s1;
	const char *s2;
    size_t s;

	if (*needle == '\0')
		return (char *)(haystack);
	while (*haystack != '\0' && size > 0)
	{
		s1 = haystack;
		s2 = needle;
        s = size;
		while (*s2 != '\0' && *s1 == *s2 && s > 0)
		{
			s1++;
			s2++;
            s--;
		}
		if (*s2 == '\0')
			return ((char *)haystack);
		haystack++;
        size--;
	}
	return (0);
}
