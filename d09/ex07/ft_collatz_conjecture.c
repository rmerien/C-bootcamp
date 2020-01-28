/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 00:59:56 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/10 11:04:31 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	if (base == 1 || !base)
		return (0);
	else if (base % 2 == 1)
		base = base * 3 + 1;
	else if (base % 2 == 0)
		base = base / 2;
	return (ft_collatz_conjecture(base) + 1);
}
