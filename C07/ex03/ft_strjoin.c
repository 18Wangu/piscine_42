/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:48:14 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/18 12:59:56 by tpremart         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_initial;

	dest_initial = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_initial);
}

int	ft_size_tab(int size, char **strs, char *sep)
{
	int	size_tab;
	int	i;

	size_tab = 0;
	i = 0;
	while (i < size)
	{
		size_tab += ft_strlen(strs[i]);
		if (i < size - 1)
			size_tab += ft_strlen(sep);
	i++;
	}
	return (size_tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tableau_final;

	if (size == 0)
	{
		tableau_final = malloc(sizeof(char) * 1);
		tableau_final[0] = '\0';
		return (tableau_final);
	}
	tableau_final = malloc(sizeof(char) * ft_size_tab(size, strs, sep) + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(tableau_final, strs[i]);
		if (i < size - 1)
			ft_strcat(tableau_final, sep);
		i++;
	}
	return (tableau_final);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	//(void)argc;
	//(void)argv;
	//char	*print;
	//int	size = 2;
	//char	*tab[] = {" ", "wo rd  "};
	//print = ft_strjoin(size, tab, "''");
	//printf("%s", print);
	printf("%s", ft_strjoin(argc, argv, "._."));
}*/
