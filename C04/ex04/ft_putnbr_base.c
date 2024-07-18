/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:25:49 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/18 15:14:32 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	is_valid_base(int length, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || length == 1)
		return (1);
	while (i < length)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (i < length)
	{
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		length;
	long	digit;

	nb = nbr;
	length = ft_strlen(base);
	if (is_valid_base(length, base) == 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= length)
		{
			ft_putnbr_base(nb / length, base);
		}
		digit = nb % length;
		write(1, &base[digit], 1);
	}
	else
		return ;
}
/* 
int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
}*/
