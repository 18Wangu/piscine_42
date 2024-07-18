/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:49:09 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/05 13:33:37 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	n;

	if (argc != 2)
	{
		printf("erreur");
		return (1);
	}

	n = ft_atoi(argv[1]);
	printf("%d", ft_iterative_factorial(n));
}
*/
