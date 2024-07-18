/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:52:44 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/04 16:11:55 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	if (size <= length_dest)
		return (length_src + size);
	if (size <= length_dest && size <= length_src)
		return (length_src + length_dest);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (length_dest + length_src);
}
/*
int	main(void)
{
	char	dest[50] = "bonjour ";
	char	src[] = "Paul";

	printf("%d", ft_strlcat(dest, src, 15));
}
*/
