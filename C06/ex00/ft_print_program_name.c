/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:57:25 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/09 08:57:32 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	length;

	if (argc != 1)
	{
		write(1, "erreur", 6);
		return (1);
	}
	length = 0;
	while (argv[0][length] != '\0')
		length++;
	write(1, argv[0], length);
	write(1, "\n", 1);
	return (0);
}
