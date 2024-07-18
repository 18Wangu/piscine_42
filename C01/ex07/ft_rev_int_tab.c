/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:20:55 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/29 12:36:56 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main()
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	_size = 5;	

	for (int i = 0; i < _size; i++)
	{
		printf("%d", tab[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab, _size);
	for (int j = 0; j < _size; j++)
	{
		printf("%d", tab[j]);
	}
}*/
