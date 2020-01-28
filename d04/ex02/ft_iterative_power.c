/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 17:06:55 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/07 00:05:34 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		tmp;
	int		result;

	tmp = 1;
	result = 1;
	if (power < 0)
		return (0);
	while (tmp <= power)
	{
		result *= nb;
		tmp++;
	}
	return (result);
}
