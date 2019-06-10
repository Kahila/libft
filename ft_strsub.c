/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 01:58:21 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 11:01:08 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		size;

	size = ft_strlen((char *)s) - (start);
	new = ft_memalloc(size);
	while (start != 0 && *s != '\0')
	{
		start--;
		s++;
	}
	ft_strncpy(new, (char *)s, (int)len);
	return (new);
}
