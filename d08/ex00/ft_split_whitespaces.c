/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 01:13:15 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/19 11:03:06 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_whitespaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str, int i, int n)
{
	while (str[i] != '\0')
	{
		while (ft_whitespaces(str[i]))
			++i;
		while (!(ft_whitespaces(str[i])) && str[i] != '\0')
		{
			if (i == 0 || ft_whitespaces(str[i - 1]))
				n++;
			i++;
		}
	}
	return (n);
}

int		ft_len(char *str, int i)
{
	int	len;

	len = 0;
	while (!(ft_whitespaces(str[i])) && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	char			**tab;
	int				wd;
	int				let;
	int				n;
	int				i;

	n = ft_count_words(str, 0, 0);
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (n + 1));
	wd = -1;
	while (++wd < n)
	{
		while (ft_whitespaces(str[i]) && str[i])
			i++;
		tab[wd] = (char *)malloc(sizeof(char) * (ft_len(str, i) + 1));
		let = 0;
		while (!(ft_whitespaces(str[i])) && str[i])
			tab[wd][let++] = str[i++];
		tab[wd][let] = 0;
		i++;
	}
	tab[wd] = 0;
	return (tab);
}
