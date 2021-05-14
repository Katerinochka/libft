/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:47:40 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/07 14:53:49 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	if (c == 0)
		return ((char *)str + ft_strlen(str));
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
