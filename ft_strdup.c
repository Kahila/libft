/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:34:16 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 13:56:01 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(char *str)
{
	char	*strdup;
	int		i;

	strdup = ft_memalloc(ft_strlen(str));
	i = 0;
	while (str[i] != '\0')
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
