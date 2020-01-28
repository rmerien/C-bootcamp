/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llassall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:09:14 by llassall          #+#    #+#             */
/*   Updated: 2018/08/19 19:02:09 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display00(int x, int y)
{
	ft_putstr("[colle-00] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_display01(int x, int y)
{
	ft_putstr("[colle-01] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_display02(int x, int y)
{
	ft_putstr("[colle-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_display03(int x, int y, int  answ)
{
	if (answ)
		ft_putstr(" || ");
	ft_putstr("[colle-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_display04(int x, int y, int  answ)
{
	if (answ)
		ft_putstr(" || ");
	ft_putstr("[colle-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}
