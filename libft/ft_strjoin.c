/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:15:24 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/01 15:37:27 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*rez;

	rez = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!rez)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		rez[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		rez[i + j] = s2[j];
		j++;
	}
	rez[i + j] = '\0';
	return (rez);
}
