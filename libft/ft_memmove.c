/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:25:12 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/06 13:48:15 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*nextd;
	const char	*s;
	const char	*nexts;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		nextd = d + n - 1;
		nexts = s + n - 1;
		while (n--)
			*nextd-- = *nexts--;
	}
	return (dest);
}
