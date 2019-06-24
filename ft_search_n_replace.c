/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_n_replace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:50:23 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/24 11:00:45 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_search_n_replace(char *str, int ch1, int ch2)
{
	int i;

	if (!str || !ch1 || !ch2)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch1)
			str[i] = ch2;
		i++;
	}
	return (str);
}
