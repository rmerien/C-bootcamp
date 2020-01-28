/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:25:38 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/20 23:50:21 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	i = -1;
	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
		tab[++i] = min++;
	*range = tab;
	return (i + 1);
}
