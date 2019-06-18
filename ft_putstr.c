/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 11:54:24 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/18 08:53:21 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putstr(char *str)
{
	int counter;

	if (!str)
		return ;
	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
