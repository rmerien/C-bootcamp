/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:11:18 by amerrouc          #+#    #+#             */
/*   Updated: 2018/08/12 20:20:17 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r01.h"

int		check_all(int **tab)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (i < 9)
	{
		check *= check_line(tab, i);
		check *= check_col(tab, i);
		check *= check_sqr(tab, i + 1);
		i++;
	}
	return (check);
}

int		**solve(int **sudo, int **nul_pts, int nb_nul, int *end)
{
	int	k;
	int	cor;

	k = -1;
	cor = 1;
	if (nb_nul > 0)
	{
		while ((++k < 9) & (*end != 0))
		{
			if ((nul_pts[0][k] != 0) & (*end != 0))
			{
				sudo[nul_pts[0][9]][nul_pts[0][10]] = nul_pts[0][k];
				cor = check_all(sudo);
				if (cor)
					sudo = solve(sudo, nul_pts + 1, nb_nul - 1, end);
			}
		}
	}
	if (nb_nul == 0)
		*end = 0;
	if (*end == 1)
		sudo[nul_pts[0][9]][nul_pts[0][10]] = 0;
	return (sudo);
}

void	display(int **sudo)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			c = '0' + sudo[i][j];
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = '0' + sudo[i][j];
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
}
