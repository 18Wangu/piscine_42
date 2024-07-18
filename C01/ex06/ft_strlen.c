/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:55:44 by tpremart          #+#    #+#             */
/*   Updated: 2024/06/28 10:15:14 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main()
{
	char	*message = "bonjour !";
	int	_length;

	_length = ft_strlen(message);
	printf("message : %s\n", message);
	printf("longueur du message : %d", _length);
}
*/
