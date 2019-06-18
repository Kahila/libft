/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:14:31 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/18 08:57:45 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striteri(char *s, void (*f)(unsigned int c, char *ch))
{
	unsigned int count;

	if (!s)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		(*f)(count, &s[count]);
		count++;
	}
}
