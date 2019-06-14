/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:16:59 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/14 09:08:59 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *str1, const char *str2, size_t size)
{
	int	n;
	int	i;
	int	n2;

	i = 0;
	n = 0;
	n2 = size;
	while (str1[i] != '\0' && size > 0)
	{
		n += (unsigned char)str1[i];
		i++;
		size--;
	}
	size = n2;
	i = 0;
	n2 = 0;
	while (size > 0 && str2[i] != '\0')
	{
		n2 += (unsigned char)str2[i];
		i++;
		size--;
	}
	return (n - n2);
}
