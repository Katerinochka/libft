/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:00:56 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/10 14:30:40 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rez;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (check_char(s1[start], set))
		start++;
	i = 0;
	if (start == end)
		rez = (char *)malloc(sizeof(char));
	else
	{
		while (check_char(s1[end - 1], set))
			end--;
		end = end - start;
		rez = (char *)malloc(sizeof(char) * (end + 1));
	}
	if (!rez)
		return (NULL);
	while (i < end)
		rez[i++] = s1[start++];
	rez[i] = '\0';
	return (rez);
}
