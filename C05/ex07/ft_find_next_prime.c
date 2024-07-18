/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:02:58 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/09 13:02:28 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_find_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ar, char *av[])
{
	printf("%d", ft_find_next_prime(atoi(av[1])));
}
*/
