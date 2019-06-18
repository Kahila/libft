/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:38:01 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/17 13:18:11 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	char			*fresh;
	unsigned int	count;

	if (!s)
		return (NULL);
	count = 0;
	fresh = ft_strnew(ft_strlen((char *)s));
	if (fresh == NULL)
		return (NULL);
	else
	{
		while (s[count] != '\0')
		{
			fresh[count] = f(count, s[count]);
			count++;
		}
	}
	return (fresh);
}
