/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 12:14:05 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/06 18:53:41 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		sqrt;

	sqrt = 0;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (nb == sqrt * sqrt)
		return (sqrt);
	else
		return (0);
}
