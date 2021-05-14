/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:13:31 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/06 16:01:27 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	c;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	c = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
