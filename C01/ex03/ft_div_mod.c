/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:30:07 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/28 08:54:19 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
/*
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d \nb = %d \n", a, b);
	printf("la division de a par b est : %d plus un reste de %d", div, mod);
}
*/
