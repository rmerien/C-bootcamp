/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chg_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:29:28 by amerrouc          #+#    #+#             */
/*   Updated: 2018/08/12 19:09:49 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r01.h"

int		verification(int *verif)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (verif[i] > 1)
			return (0);
		i++;
	}
	return (1);
}

int		*crea_tab(int n)
{
	int	i;
	int *tab;

	i = 0;
	tab = malloc(sizeof(int) * n);
	while (i < n)
		tab[i++] = 0;
	return (tab);
}

void	c_l_cube(int *c_val, int *l_val, int nb)
{
	if (nb % 3)
	{
		l_val[0] = (nb / 3) * 3;
		c_val[0] = ((nb % 3) - 1) * 3;
	}
	else
	{
		l_val[0] = ((nb / 3) - 1) * 3;
		c_val[0] = 6;
	}
	l_val[1] = l_val[0] + 3;
	c_val[1] = c_val[0] + 3;
}

int		**tab_to_int(char **tab)
{
	int **sudo;
	int i;
	int	j;

	i = 0;
	sudo = malloc(sizeof(int*) * 9);
	while (i < 9)
		sudo[i++] = malloc(sizeof(int) * 9);
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i + 1][j] == '.')
				sudo[i][j++] = 0;
			else
			{
				sudo[i][j] = (tab[i + 1][j] - '0');
				j++;
			}
		}
		i++;
	}
	return (sudo);
}
