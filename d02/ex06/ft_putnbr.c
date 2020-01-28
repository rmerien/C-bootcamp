/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 21:41:01 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/02 09:38:12 by rmerien          ###   ########.fr       */
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
	if (numbr > 0)
	{
		ft_putnbr(numbr / 10);
		ft_putchar((numbr % 10) + 48);
	}
}
