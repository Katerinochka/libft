/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:22:02 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/07 15:25:27 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < n)
		i++;
	while (src[j] != '\0' && (i + j) < (n - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < n)
		dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
