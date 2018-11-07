/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 19:22:38 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 19:23:26 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_itoa_len(int n)
{
	size_t	r;

	if (n == 0)
		return (1);
	r = 0;
	if (n < 0)
		r++;
	while (n)
	{
		n /= 10;
		r++;
	}
	return (r);
}

char				*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		i;

	len = ft_itoa_len(n);
	if (!(p = (char *)malloc(len + 1)))
		return (NULL);
	p[len] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (i < len--)
	{
		p[len] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (p);
}
