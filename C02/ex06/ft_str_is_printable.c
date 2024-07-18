/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:45:22 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/01 11:56:59 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putnbr(int n);
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*msg = "qqqqqqqqi2455 4d s  s`q";
	int	retour;

	retour = ft_str_is_printable(msg);
	ft_putnbr(retour);
}

void	ft_putnbr(int n)
{
	int	digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	else
		digit = n % 10 + '0';
	write(1, &digit, 1);
}*/
