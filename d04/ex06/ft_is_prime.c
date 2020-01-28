/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 13:54:33 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/06 12:31:37 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int a;

	a = 5;
	if (nb <= 1)
		return (0);
	if (nb < 4)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
