/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:03:55 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/28 09:16:38 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : Le resultat de la division = %d\n", a);
 	printf("b : Le resultat du reste de la division = %d\n", b);
}
*/
