/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:25:17 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/08 11:36:41 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	unsigned	char	c2;
	unsigned	char	*str2;

	i = 0;
	str2 = (unsigned char*)str;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (str2[i] == c2)
			return (&str2[i]);
		i++;
	}
	return (NULL);
}
