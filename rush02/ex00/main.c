/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:36:58 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 21:51:23 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	char	*str;
	int		x;
	int		y;

	str = get_str();
	y = ft_line(str);
	x = ft_longueur(str);
	if(!(ft_verif(str, x)))
	{
		ft_putstr("aucune");
		return (0);
	}
	if (!(ft_compare(str, x, y)))
	{
		ft_putstr("aucune");
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
