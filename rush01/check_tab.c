/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:54:35 by amerrouc          #+#    #+#             */
/*   Updated: 2018/08/12 17:54:10 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r01.h"

int	check_char(char **tab)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while ((j < 9) && (tab[i][j] != '\0'))
		{
			if (((tab[i][j] <= '9') && (tab[i][j] >= '1'))
					|| (tab[i][j] == '.'))
				j++;
			else
			{
				return (0);
			}
		}
		if ((j < 9) || (tab[i][j] != '\0'))
			return (0);
		i++;
	}
	return (1);
}

int	check_sqr(int **tab, int k)
{
	int	c_val[2];
	int	l_val[2];
	int	*verif;
	int	i;
	int	j;

	c_l_cube(c_val, l_val, k);
	verif = crea_tab(9);
	i = l_val[0];
	while (i < l_val[1])
	{
		j = c_val[0];
		while (j < c_val[1])
		{
			if (tab[i][j] != 0)
				verif[tab[i][j] - 1]++;
			j++;
		}
		i++;
	}
	return (verification(verif));
}

int	check_line(int **tab, int i)
{
	int j;
	int	v;
	int num;
	int	*verif;

	v = 0;
	j = 0;
	verif = crea_tab(9);
	while (j < 9)
	{
		if (tab[i][j] != 0)
		{
			num = tab[i][j];
			verif[num - 1]++;
		}
		j++;
	}
	return (verification(verif));
}

int	check_col(int **tab, int j)
{
	int i;
	int	v;
	int num;
	int	*verif;

	i = 0;
	v = 0;
	verif = crea_tab(9);
	while (i < 9)
	{
		if (tab[i][j] != 0)
		{
			num = tab[i][j];
			verif[num - 1]++;
		}
		i++;
	}
	return (verification(verif));
}

int	check_tab(char **argv)
{
	int i;
	int check;
	int	**tab;

	i = 1;
	check = 1;
	if (check_char(argv) == 1)
	{
		tab = tab_to_int(argv);
		while (i < 9)
		{
			check = check
				* check_line(tab, i)
				* check_col(tab, i);
			i++;
		}
	}
	else
		check = 0;
	return (check);
}
