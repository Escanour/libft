/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:54:09 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 14:53:01 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*str;
	size_t		j;

	str = (char *)s;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = i;
		i++;
	}
	if (str[j] == (char)c)
		return (str + j);
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
