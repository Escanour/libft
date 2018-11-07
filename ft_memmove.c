/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:03:09 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/09 11:06:20 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*msrc;
	unsigned char	*mdst;
	size_t			i;

	i = 0;
	msrc = (unsigned char *)src;
	mdst = (unsigned char *)dst;
	if (msrc < mdst)
		while (len--)
			mdst[len] = msrc[len];
	else
		while (i < len)
		{
			mdst[i] = msrc[i];
			i++;
		}
	return (dst);
}
