/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 23:16:08 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 22:25:39 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	ft_strcpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
}

char	*get_str(void)
{
	char	*tmp;
	char	*str;
	char	buf;
	int		n;

	n = 0;
	tmp = NULL;
	str = NULL;
	while (read(0, &buf, 1) > 0)
	{
		free(tmp);
		if (!(tmp = (char*)malloc(sizeof(*tmp) * (n + 1))))
			return (0);
		ft_strcpy(tmp, str, n);
		free(str);
		if (!(str = (char*)malloc(sizeof(*str) * (n + 1))))
			return (0);
		ft_strcpy(str, tmp, n);
		str[n++] = buf;
	}
	str[n] = '\0';
	return (str);
}
