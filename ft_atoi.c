/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:12:47 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 14:21:15 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int c;
	int val;

	val = 0;
	c = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		c = -1;
	else
		c = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str) && *str != '\0')
		val = (val * 10) + (*str++ - '0');
	return (val * c);
}
