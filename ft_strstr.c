/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 11:54:31 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/12 16:53:48 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[a])
	{
		while (s1[a + b] && s1[a + b] == s2[b])
			b++;
		if (!s2[b])
			return ((char *)s1 + a);
		else
			b = 0;
		a++;
	}
	return (NULL);
}
