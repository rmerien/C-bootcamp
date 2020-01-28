/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 11:39:29 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 22:23:25 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] != '\n' && (s1[i] != '\n' && s1[i] != '\0'))
	{
		i++;
	}
	if ((s1[i] == '\n' || s1[i] == '\0') && (s2[i] == '\n' || s2[i] == '\0'))
		return (1);
//	return (s1[i] - s2[i]);
	/*	int		i;

		i = 0;
		while (s1[i] == s2[i] && s2[i] != '\n' && s2[i] != '\0')
		{
		if (s1[i] == '\n' || s1[i] == '\0')
		return (0);
		i++;
		}
		if ((s2[i] == '\n' || s2[i] == '\0' ) && s1[i] == '\0')
		return (1);
*/	 return (0);
}

char	*ft_create(char *test, int longueur, char a, char z, char m)
{
	int		i;

	i = 1;
	test[0] = a;
	while (i <= longueur - 2)
	{
		test[i] = m;
		++i;
	}
	if (longueur > 1)
	{
		test[i] = z;
		test[i + 1] = '\n';
	}
	else
		test[i] = '\n';
	return (test);
}

int		ft_bloc(int y, int x, char *src)
{
	int		j;
	char	*mid;
	if (!(mid = (char*)malloc(sizeof(char) * (x * y))))
		return (0);
	j = -1;
	while (y > 2 && ++j != y)
	{
		if (x > 0 && y > 2)
		{
			ft_create(mid, x, '|', '|', ' ');
			if(!(ft_strcmp(src, mid)))
				return (0);
		}
		free(mid);
		if(!(mid = (char*)malloc(sizeof(char) * (x * y))))
			return (0);
	}
	free(mid);
	return (1);
}

int		ft_colle00(char *src, int x, int y)
{
	char	*top;
	char	*middle;
	char	*bottom;

	if (!(top = (char*)malloc(sizeof(char) * (x + 1))))
		return (0);
	if (!(bottom = (char*)malloc(sizeof(char) * (x + 1))))
		return (0);
	if (x > 0 && y > 0)
	{
		ft_create(top, x, 'o', 'o', '-');
		if (!(ft_strcmp(src, top)))
		{
			return (0);
		}
		free(top);
	}
	if (!(ft_bloc(y, x, src)))
		return (0);
	if (x >= 1 && y >= 2)
	{
		ft_create(bottom, x, 'o', 'o', '-');
		if(!(ft_strcmp(src, bottom)))
			return (0);

		free(bottom);
	}
	return (1);
}

int		ft_compare(char *str, int x, int y)
{
	int 	answ;

	answ = 0;
	if (ft_colle00(str, x, y))
	{
		ft_display00(x, y);
		return (1);
	}
	if (ft_colle01(str, x, y))
	{
		ft_display01(x, y);
		return (1);
	}
	if (ft_colle02(str, x, y))
	{
		ft_display02(x, y);
		answ = 1;
	}
	if (ft_colle03(str, x, y))
	{
		ft_display03(x, y, answ);
		answ = 1;
	}
	if (ft_colle04(str, x, y))
	{
		ft_display04(x, y, answ);
		return (1);
	}
	if (!answ)
		return (0);
	return (1);
}
