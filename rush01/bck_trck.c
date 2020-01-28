/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bck_trck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 09:32:25 by amerrouc          #+#    #+#             */
/*   Updated: 2018/08/12 20:13:58 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r01.h"

int		**tab_auth(int nb_zer, int **tab)
{
	int	i;
	int j;
	int	**auth;

	i = 0;
	auth = malloc(sizeof(int *) * nb_zer);
	while (i < nb_zer)
		auth[i++] = crea_tab(11);
	i = -1;
	nb_zer = 0;
	while (++i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] == 0)
			{
				auth[nb_zer][9] = i;
				auth[nb_zer][10] = j;
				nb_zer++;
			}
			j++;
		}
	}
	return (auth);
}

int		*check(int **tab, int i, int j)
{
	int check;
	int	k;
	int *auth;
	int nb;

	auth = crea_tab(11);
	k = (i / 3) * 3 + (j % 3) + 1;
	nb = 1;
	while (nb <= 9)
	{
		tab[i][j] = tab[i][j] + nb;
		check = 1;
		check *= check_line(tab, i);
		check *= check_col(tab, j);
		check *= check_sqr(tab, k);
		auth[nb - 1] = nb * check;
		tab[i][j] = tab[i][j] - nb;
		nb++;
	}
	auth[9] = i;
	auth[10] = j;
	return (auth);
}

int		count_zer(int **tab)
{
	int nb_zer;
	int	i;
	int	j;

	nb_zer = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] == 0)
				nb_zer++;
			j++;
		}
		i++;
	}
	return (nb_zer);
}

int		**poss_val(int **tab)
{
	int	**auth;
	int nb_zer;
	int	i;
	int	j;
	int	z;

	nb_zer = count_zer(tab);
	auth = tab_auth(nb_zer, tab);
	z = 0;
	while (z < nb_zer)
	{
		i = auth[z][9];
		j = auth[z][10];
		auth[z] = check(tab, i, j);
		z++;
	}
	return (auth);
}
