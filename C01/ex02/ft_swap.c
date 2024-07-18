/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:30:21 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/27 17:48:03 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 18;
	y = 150;
	printf("avant : x = %d, y = %d \n", x, y);
	ft_swap(&x, &y);
	printf("apres : x = %d, y = %d \n", x, y);
}*/
