/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:19:11 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/28 11:41:46 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
/*
int main()
{
    ft_putnbr(42);  // Exemple d'appel pour afficher "42"
    ft_putchar('\n');
    ft_putnbr(-2147483648);  // Exemple pour le minimum de int
    ft_putchar('\n');
    ft_putnbr(2147483647);  // Exemple pour le maximum de int
    ft_putchar('\n');
    ft_putnbr(0);  // Exemple pour zéro
    ft_putchar('\n');
    return 0;
}
*/
