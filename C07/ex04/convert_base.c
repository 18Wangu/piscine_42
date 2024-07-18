/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:39:00 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/18 14:44:40 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	length;

	length = ft_strlen(base);
	if (base[0] == '\0' || length == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	search_index(char *base, char c)
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

int	ft_atoi_base(char *nbr, char *base_from)
{
	long	r1;
	int		i;
	long	sign;

	i = 0;
	sign = 1;
	if (is_valid_base(base_from) != 1)
		return (0);
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}
	r1 = 0;
	while (nbr[i] && search_index(base_from, nbr[i]) != -1)
	{
		r1 = r1 * ft_strlen(base_from) + search_index(base_from, nbr[i]);
		i++;
	}
	return (sign * r1);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi_base("-2147483648", "0123456789"));
} */
