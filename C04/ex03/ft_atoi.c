/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:23:33 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/04 16:28:28 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	resultat;

	i = 0;
	sign = 1;
	resultat = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (sign * resultat);
}
/*
int	main(void)
{
	char	test[] = "   ---+---+1234ab567";
	printf("%d", ft_atoi(test));
	printf("\n comparer avec la vrai fonction atoi :\n");
	printf("%d", atoi(test));
}
*/
