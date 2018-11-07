/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:32:58 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/22 11:49:10 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t len)
{
	char	*r;

	if (!(r = (char *)malloc(len)))
		return (NULL);
	return (ft_memcpy(r, src, len));
}
