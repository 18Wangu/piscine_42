/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:34:54 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/05 13:59:06 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(3, 4));
}
*/
