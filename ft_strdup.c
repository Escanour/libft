/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:06:12 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 15:03:03 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	l;
	size_t	i;
	char	*r;

	l = 0;
	while (src[l])
		l++;
	r = (char *)malloc(l + 1);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		r[i] = src[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
