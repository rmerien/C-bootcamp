/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:31:50 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/22 03:53:21 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*res;
	int		i;

	i = -1;
	if (!(res = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (++i < length)
		res[i] = (*f)(tab[i]);
	return (res);
}
