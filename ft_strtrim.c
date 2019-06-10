/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:15:33 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 11:18:59 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *str)
{
	char	*s;
	char	*str1;
	char	*rev;
	char	*new;
	int		len;
	int		count;

	count = 0;
	s = (char *)str;
	len = 0;
	while ((*s == '\t' || *s == '\n' || *s == ' ') && *s != '\0')
	{
		s++;
		count++;
	}
	str1 = (char *)s;
	count = ft_strlen(str1);
	rev = ft_memalloc(count);
	count--;
	while (count >= 0)
	{
		rev[len] = str1[count];
		count--;
		len++;
	}
	rev[len] = '\0';
	while ((*rev == ' ' || *rev == '\t' || *rev == '\n'))
		rev++;
	s = rev;
	len = ft_strlen(s);
	new = ft_memalloc(len);
	while (len >= 0)
	{
		new[count] = s[len];
		len--;
		count++;
	}
	new[count] = '\0';
	return (new);
}
