/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 13:42:23 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/07 17:04:05 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_result(int nb)
{
	if (nb < 92)
	{
		nb++;
		ft_result(nb + 1);
	}
	return (nb);
}

int		ft_eight_queens_puzzle(void)
{
	int answr;

	answr = 92;
	if (answr != 92)
	{
		ft_result(answr);
	}
	return (answr);
}
