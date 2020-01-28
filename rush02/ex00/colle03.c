/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 15:22:22 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 19:17:42 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_bloc03(int y, int x, char *middle, char *src)
{
	int		j;

	j = -1;
	while (y > 2 && ++j != y)
	{
		if (x >= 1 && y >= 3)
		{
			ft_create(middle, x, 'B', 'B', ' ');
			if (!(ft_strcmp(src, middle)))
				return (0);
		}
	}
	return (1);
}

int		ft_colle03(char *src, int x, int y)
{
	char	*top;
	char	*middle;
	char	*bottom;

	top = NULL;
	middle = NULL;
	bottom = NULL;
	if (x >= 1 && y >= 1)
	{
		ft_create(top, x, 'A', 'C', 'B');
		if (!(ft_strcmp(src, top)))
			return (0);
	}
	if (!(ft_bloc03(y, x, middle, src)))
		return (0);
	if (x >= 1 && y >= 2)
	{
		ft_create(bottom, x, 'A', 'C', 'B');
		if (!(ft_strcmp(src, bottom)))
			return (0);
	}
	return (1);
}
