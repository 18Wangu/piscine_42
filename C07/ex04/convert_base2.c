/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpremart <tpremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:38:42 by tpremart          #+#    #+#             */
/*   Updated: 2024/07/18 14:48:44 by tpremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		is_valid_base(char *base);

char	search_index(char *base, char c);

int		ft_atoi_base(char *nbr, char *base_from);

int	ft_len_nb(long nbr, char *base_to)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		len++;
		nbr = nbr / ft_strlen(base_to);
	}
	return (len);
}

char	*ft_return_zero(long nbr, char *base_to)
{
	char	*first_char_base;

	first_char_base = malloc(2);
	first_char_base[0] = base_to[nbr % ft_strlen(base_to)];
	first_char_base[1] = '\0';
	return (first_char_base);
}

char	*ft_itoa_base(long nbr, char *base_to)
{
	char	*resultat2;
	int		len;

	if (is_valid_base(base_to) != 1)
		return (0);
	len = ft_len_nb(nbr, base_to);
	resultat2 = malloc(sizeof(char) * len + 1);
	if (!resultat2)
		return (0);
	resultat2[len] = '\0';
	len--;
	if (nbr == 0)
		return (ft_return_zero(nbr, base_to));
	if (nbr < 0)
	{
		resultat2[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		resultat2[len] = base_to[nbr % ft_strlen(base_to)];
		nbr = nbr / ft_strlen(base_to);
		len--;
	}
	return (resultat2);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb_int;
	char	*resultat;

	nb_int = ft_atoi_base(nbr, base_from);
	resultat = ft_itoa_base(nb_int, base_to);
	return (resultat);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_convert_base("-2147483648", "0123456789", "012"));
}
 */