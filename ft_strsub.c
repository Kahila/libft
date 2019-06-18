/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 01:58:21 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/18 09:07:16 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		k;

	k = 0;
	if (!s)
		return (NULL);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (len > 0)
	{
		new[k] = s[start];
		len--;
		start++;
		k++;
	}
	new[k] = '\0';
	return (new);
}
