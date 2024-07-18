/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:01:15 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/28 12:25:13 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(int _nb1, int _nb2)
{
	if (_nb1 != 98 || _nb2 != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	numb1;
	int	numb2;

	numb1 = 0;
	while (numb1 <= 98)
	{
		numb2 = numb1 + 1;
		while (numb2 <= 99)
		{
			ft_putchar((numb1 / 10) + '0');
			ft_putchar((numb1 % 10) + '0');
			write(1, " ", 1);
			ft_putchar((numb2 / 10) + '0');
			ft_putchar((numb2 % 10) + '0');
			ft_print_comma(numb1, numb2);
			numb2++;
		}
		numb1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
