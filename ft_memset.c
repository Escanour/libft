/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:39:20 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/08 14:56:21 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	index;
	char			*b2;
	unsigned char	c2;

	if (len)
	{
		c2 = (unsigned char)c;
		b2 = (char *)b;
		index = 0;
		while (index < len)
		{
			b2[index] = c2;
			index++;
		}
	}
	return (b);
}
