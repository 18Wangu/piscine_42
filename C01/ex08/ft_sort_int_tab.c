/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:04:41 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/02 15:53:34 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[i] > tab[i + j + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + j + 1];
				tab[i + j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {2, 3, 6, 8, 7, 1, 5, 2};
	int	size = 8;

	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
}
*/
