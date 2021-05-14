/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:58:32 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/09 12:59:52 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (c == 0)
		return ((char *)str + len + 1);
	while (len >= 0 && str[len])
	{
		if (str[len] == (unsigned char)c)
			return ((char *)str + len);
		len--;
	}
	return (0);
}
