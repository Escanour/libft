/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 18:43:47 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 09:56:50 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	char	*c1;
	char	*c2;
	size_t	i;

	if (!s1 || !s2 || !(r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	c1 = (char *)s1;
	c2 = (char *)s2;
	i = 0;
	while (*c1)
		r[i++] = *(c1++);
	while (*c2)
		r[i++] = *(c2++);
	r[i] = '\0';
	return (r);
}
