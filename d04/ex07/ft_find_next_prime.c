/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 01:14:01 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/06 17:12:07 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int a;

	a = 5;
	while (nb <= 2147483647)
	{
		if (nb <= 1)
			ft_is_prime(nb + 1);
		if (nb < 4)
			return (nb);
		if (nb % 2 == 0)
			ft_is_prime(nb + 1);
		while (a <= nb / 2)
		{
			if (nb % a == 0)
				ft_is_prime(nb + 1);
			a++;
		}
		return (nb);
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (!ft_is_prime(nb))
			return (nb);
		{
			ft_is_prime(nb + 1);
		}
		return (nb);
	}
	return (0);
}
