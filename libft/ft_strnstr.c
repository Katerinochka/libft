/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:05:42 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/06 17:10:00 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (!little[0])
		return ((char *)big);
	i = 0;
	j = 0;
	len_little = ft_strlen(little);
	while (i < len && *(big + i) && *(little + j))
	{
		j = 0;
		while (i + j < len && *(little + j) && *(big + i + j) == *(little + j))
			j++;
		if (j == len_little)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
