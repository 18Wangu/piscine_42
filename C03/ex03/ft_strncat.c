/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:28:37 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/03 15:40:36 by tpremart         ###   ########.fr       */
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
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*initial_destination;

	i = 0;
	initial_destination = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (i < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (initial_destination);
}
/*
int	main(void)
{
	char	st1[50] = "my name is ";
	char	st2[] = "booobbbbbbbbb";

	ft_strncat(st1, st2, 3);
	ft_putstr(st1);
}
*/
