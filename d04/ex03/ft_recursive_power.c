/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:08:52 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/07 14:08:54 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power < 0)
		return (0);
	else
		return (1);
}
