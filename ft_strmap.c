/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 18:43:43 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 12:07:40 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	size_t	l;
	size_t	i;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	if (!(r = (char *)malloc(l + 1)))
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = f(s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
