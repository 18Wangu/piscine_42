/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:02:05 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/17 17:28:08 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	nb_word;
	int	i;

	nb_word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
			nb_word++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	return (nb_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		length;

	tab = malloc(sizeof(char *) * count_word(str, charset) + 1);
	if (!tab)
		return (0);
	i = 0;
	while (*str != '\0')
	{
		length = 0;
		while (*str != '\0' && is_charset(*str, charset))
			str++;
		while (str[length] != '\0' && !is_charset(str[length], charset))
			length++;
		tab[i] = malloc(sizeof(char) * length + 1);
		j = 0;
		while (j < length)
			tab[i][j++] = *str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**tab;
	char	*string = "0";
	char	*sep = " 8+";
	
	tab = ft_split(string, sep);
	for (int i = 0; i < count_word(string, sep); i++)
	{
		printf("%s\n", tab[i]);
	}
}*/
