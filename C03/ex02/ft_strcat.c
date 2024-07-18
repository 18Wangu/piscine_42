/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:22:06 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/03 15:34:17 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
*/
char	*ft_strcat(char *dest, char *src)
{
	char	*initial_destination;

	initial_destination = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (initial_destination);
}
/*
int	main(void)
{
	char	st1[50] = "hello, ";
	char	st2[] = "world";

	ft_strcat(st1, st2);
	ft_putstr(st1);
}
*/
