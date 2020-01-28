/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 21:53:02 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 22:24:48 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_line(char *str)
{
	int		i;
	int		c;

	c = 0;
	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == '\n' && str[i + 1] == '\0')
			return (c + 1);
		if (str[i] == '\n' || str[i] == '\0')
			c++;
	}
	return (c);
}

int		ft_longueur(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int		ft_verif(char *str, int x)
{
	int		i;
	int		l;

	i = -1;
	l = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '\n')
			++l;
		if ((i - l + 1) % x != 0 && (str[i] == '\n'))
			return (0);
	}
	return (1);
}
