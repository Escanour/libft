/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:48:21 by aessaid           #+#    #+#             */
/*   Updated: 2018/10/21 14:48:59 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		rows(char const *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static size_t		len(char const *s, char c, int i)
{
	size_t		len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	if (!(p = (char **)malloc(sizeof(char *) * (rows(s, c) + 1))))
		return (NULL);
	while (n < rows(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		if (!(p[n] = (char *)malloc(sizeof(char) * (len(s, c, i) + 1))))
			return (NULL);
		while (s[i] && s[i] != c)
			p[n][j++] = s[i++];
		p[n][j] = '\0';
		n++;
	}
	p[n] = NULL;
	return (p);
}
