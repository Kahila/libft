/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:27:39 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/24 16:28:46 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_toupper(int ch)
{
	char c = (char)(ch);
	if (c >= 'a' && c <= 'z')
		return ((ch - 7) - 25);
	else
		return ((int)(c));
}
