/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:47:23 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/03 10:56:59 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "ohohoh";
	char	dest[3];
	char	*resultat = ft_strcpy(src, dest);

	for (int i = 0; i < 8; i++)
	{
		printf("%c", src[i]);
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
		printf("%c", resultat[i]);
}
*/
