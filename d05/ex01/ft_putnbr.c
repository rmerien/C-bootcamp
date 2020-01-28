/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:03:14 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/16 12:02:59 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
