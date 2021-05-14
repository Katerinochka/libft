/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:34:20 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/07 16:46:30 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_sep(char const *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			n++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ind;
	int		n;
	int		cs;
	char	**rez;

	cs = count_sep(s, c);
	rez = (char **)malloc(sizeof(char *) * (cs + 1));
	if (!rez)
		return (NULL);
	i = 0;
	ind = 0;
	while (ind < cs)
	{
		while (s[i] && s[i] == c)
			i++;
		n = i;
		while (s[i] != c && s[i])
			i++;
		rez[ind++] = ft_substr(s, n, i - n);
		i++;
	}
	rez[ind] = 0;
	return (rez);
}
