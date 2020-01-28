/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integrer_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 00:51:20 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/05 11:52:48 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int j;
	int tmp;

	if (size > 0)
	{
		ft_sort_integer_table(tab, size - 1);
		tmp = tab[size - 1];
		j = size - 2;
		while (j >= 0 && tab[j] > tmp)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = tmp;
	}
}
