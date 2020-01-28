/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 15:23:00 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 19:18:16 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_bloc02(int y, int x, char *middle, char *src)
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

int		ft_colle02(char *src, int x, int y)
{
	char	*top;
	char	*middle;
	char	*bottom;

	top = NULL;
	middle = NULL;
	bottom = NULL;
	if (x >= 1 && y >= 1)
	{
		ft_create(top, x, 'A', 'A', 'B');
		if (!(ft_strcmp(src, top)))
			return (0);
	}
	if (!(ft_bloc02(y, x, middle, src)))
		return (0);
	if (x >= 1 && y >= 2)
	{
		ft_create(bottom, x, 'B', 'B', 'C');
		if (!(ft_strcmp(src, bottom)))
			return (0);
	}
	return (1);
}
