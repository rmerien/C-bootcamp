/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usefull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 03:05:35 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/22 03:46:32 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int numbr;

	if (nb < 0)
	{
		ft_putchar('-');
		numbr = nb * (-1);
	}
	else
		numbr = nb;
	if (numbr > 9)
		ft_putnbr(numbr / 10);
	ft_putchar((numbr % 10) + 48);
}

int		ft_atoi(char *str)
{
	int		atoi;
	int		neg;
	int		n;

	n = 0;
	neg = 1;
	atoi = 0;
	while ((str[n] > 8 && str[n] < 14) || str[n] == 32)
		n++;
	if (str[n] == '-')
		neg = -1;
	if (str[n] == '-' || str[n] == '+')
		n++;
	while (str[n] <= '9' && str[n] >= '0')
	{
		atoi = atoi * 10;
		atoi = atoi + (str[n] - 48) * neg;
		n++;
	}
	return (atoi);
}
