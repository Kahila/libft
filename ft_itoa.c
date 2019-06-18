/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:22:42 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/18 08:42:06 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t			leng;
	char			*str;
	unsigned int	num;

	leng = ft_int_len(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		leng++;
	}
	if (!(str = ft_strnew(leng)))
		return (NULL);
	str[--leng] = num % 10 + 48;
	while (num /= 10)
		str[--leng] = num % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
