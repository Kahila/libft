/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:08:14 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/21 16:09:58 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		*ft_memccpy (void *d1, const void *s1, int c, size_t size)
{
	char *dest = d1;
	char const *src = s1;

	while (size--)
	{
		*dest = *src;
		s1++;
		d1++;
		printf("works\n");
		if (*dest == c)
			break;
	}
	return (d1);
}
