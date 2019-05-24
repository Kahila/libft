/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:12:47 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/24 12:08:52 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int len = ft_strlen((char *)str);
	int output = 0;
	int i = 0;
	int sign = 0;
	while (str[i] != '\0' && len >  0)
	{
		if ( (str[i + 1] >= '0' && str[i + 1] <= '9') && str[i] == '-')
		{
			i++;
			len--;
			sign++;
		}

		if (str[i] >= '0' && str[i] <= '9')
		{
			output = (output * 10) + (str[i] - '0');
			len--;
			i++;
		}
		else
			break;
	}
	if (sign > 0)
		return (-1 * output);
	else
		return (output);
}
