/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:02:13 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/23 15:04:30 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_process(char op)
{
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '*')
		return (2);
	if (op == '/')
		return (3);
	if (op == '%')
		return (4);
	return (-1);
}

int		ft_calc(int a, int b, char op)
{
	int		(*process[5])(int, int);
	int		res;

	process[0] = &ft_add;
	process[1] = &ft_sub;
	process[2] = &ft_mult;
	process[3] = &ft_div;
	process[4] = &ft_mod;
	res = process[op](a, b);
	return (res);
}

int		main(int ac, char **av)
{
	int		a;
	int		b;
	int		op;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	op = ft_process(av[2][0]);
	if (av[2][1] != '\0' || !(is_op(op)))
	{
		write(1, "0\n", 2);
		return (0);
	}
	op = ft_process(av[2][0]);
	if ((op == 3 || op == 4) && b == 0)
	{
		(op == 3) ? write(1, "Stop : division by zero\n", 24)
				: write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_calc(a, b, op));
	ft_putchar('\n');
	return (0);
}
