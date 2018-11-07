/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 10:36:10 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 14:11:39 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	char		*p;

	if (!s)
		return (NULL);
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	while (*p == '\t' || *p == '\n' || *p == ' ')
		p++;
	i = ft_strlen(p) - 1;
	while (p[i] == '\t' || p[i] == '\n' || p[i] == ' ')
		i--;
	p[++i] = '\0';
	return (ft_strdup(p));
}
