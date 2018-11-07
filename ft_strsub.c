/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 13:44:45 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/20 20:18:23 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char	*r;
	size_t	i;

	if (!s || !(r = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[i])
		r[i++] = s[intstart++];
	r[i] = '\0';
	return (r);
}
