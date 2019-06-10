/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:48:52 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 14:11:34 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isprint(int ch)
{
	unsigned char c;

	c = (unsigned char)(ch);
	if (c > 31 && c < 127)
		return (1048);
	else
		return (0);
}
