/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:34:16 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/18 10:48:18 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*			ft_strdup(char *str)
{
	char *strdup;
	
	strdup = ft_memalloc (ft_strlen(str) * sizeof(char));
	int i;
   	i = 0;
	while (str[i] != '\0')
	{
		strdup[i] = str[i];
		i++;
	}
	return (str);
}
