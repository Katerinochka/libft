/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:03:15 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/11 16:09:38 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_num(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static void	*filling_char(char *rez, int n, int tmp, int size)
{
	int	i;

	i = 0;
	while (n)
	{
		rez[size - i - 2] = n % 10 + '0';
		i++;
		n /= 10;
	}
	if (tmp < 0)
	{
		rez[size - i - 2] = '-';
		rez[size - 1] = 0;
	}
	else
		rez[size - 1] = 0;
	return (rez);
}

static char	*check_input(int n)
{
	char	*rez;

	if (n == -2147483648)
	{
		rez = malloc(sizeof(char) * 12);
		if (!rez)
			return (NULL);
		ft_strlcpy(rez, "-2147483648", 12);
	}
	else
	{
		rez = malloc(sizeof(char) * 2);
		if (!rez)
			return (NULL);
		ft_strlcpy(rez, "0", 2);
	}
	return (rez);
}

char	*ft_itoa(int n)
{
	int		tmp;
	char	*rez;
	int		size_n;

	if (n == -2147483648 || n == 0)
		return (check_input(n));
	tmp = n;
	size_n = size_num(n);
	if (n < 0)
	{
		size_n++;
		n = -n;
	}
	rez = malloc(sizeof(char) * (size_n + 1));
	if (!rez)
		return (NULL);
	filling_char(rez, n, tmp, size_n + 1);
	return (rez);
}
