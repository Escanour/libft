/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:25:21 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 15:05:28 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*r;
	size_t	i;

	if (!(r = (char *)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
		r[i++] = '\0';
	return (r);
}
