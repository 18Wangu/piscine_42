/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:10:44 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/09 11:11:15 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* 
int	main(int argc, char *argv[])
{
	int	nb;

	if (argc != 2)
	{
		write(1, "erreur argument", 15);
		return (1);
	}
	nb = atoi(argv[1]);
	printf("%d", ft_fibonacci(nb));
}
 */
