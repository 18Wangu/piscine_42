/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:34:46 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/18 15:36:41 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_length(char *base)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
		length++;
	return (length);
}

int	is_valid_base(int length, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == 0 || length == 1)
		return (1);
	while (i < length)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strchr_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	length;
	int	result;
	int	sign;
	int	i;

	length = base_length(base);
	if (is_valid_base(length, base) != 0)
		return (0);
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	while (str[i] != '\0' && ft_strchr_index(base, str[i]) != -1)
	{
		result = result * length + ft_strchr_index(base, str[i]);
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>
int	main(int ac, char **av )
{
	printf("%d\n", ft_atoi_base(av[1], "salut\n"));
}*/
