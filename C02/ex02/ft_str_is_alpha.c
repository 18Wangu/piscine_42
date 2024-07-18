/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:19:39 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/01 11:02:07 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putnbr(int n)
{
	int	digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	else
		digit = n % 10 + '0';
	write(1, &digit, 1);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	*message = "bonjourolr";
	int	nombre;	

	nombre = ft_str_is_alpha(message);
	ft_putnbr(nombre);
	return (0);
}*/
