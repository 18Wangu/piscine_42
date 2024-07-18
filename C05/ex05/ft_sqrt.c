/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:17:06 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/09 13:38:31 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* 
int	main()
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(2147483648));
}
 */
