/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:55:19 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/01 11:18:58 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putnbr(int n)
{
	int	digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	else
		digit = n % 10 + '0';
	write(1, &digit, 1);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*msg = "15524";
	int	retour;

	retour = ft_str_is_numeric(msg);
	ft_putnbr(retour);
	return (0);
}*/
