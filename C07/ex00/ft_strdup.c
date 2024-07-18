/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:20:06 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/10 11:37:43 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = malloc(sizeof(char) * ft_strlen(src) + 1);
	ft_strcpy(copy, src);
	if (copy == NULL)
	{
		return (NULL);
	}
	return (copy);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("%s\n\n", ft_strdup("hello"));
} */