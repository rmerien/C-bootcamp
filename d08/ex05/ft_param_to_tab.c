/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:35:08 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/23 00:33:18 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		++i;
	dest = malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par	*stock;
	int			i;
	int			j;

	stock = malloc(sizeof(t_stock_par) * argc + 1);
	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
			++j;
		stock[i].size_param = j;
		stock[i].str = argv[i];
		stock[i].copy = ft_strdup(argv[i]);
		stock[i].tab = ft_split_whitespaces(argv[i]);
		j = 0;
		++i;
	}
	stock[i].str = 0;
	return (stock);
}
