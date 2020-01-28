/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:22:37 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/22 19:46:11 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putnbr(int i)
{
	unsigned int nb;

	if (i < 0)
	{
		ft_putchar('-');
		nb = i * (-1);
	}
	else
		nb = i;
	if (nb > 9)
		ft_putnbr(i / 10);
	ft_putchar((i % 10) + 48);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_word_tables(char **str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].copy[j])
		{
			ft_putstr(par[i].copy[j]);
			j++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_word_tables(par[i].tab);
		i++;
	}
}
