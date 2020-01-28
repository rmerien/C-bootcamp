/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:56:52 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/02 08:58:27 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char rev_alphab;

	rev_alphab = 'z';
	while (rev_alphab >= 'a')
	{
		ft_putchar(rev_alphab);
		rev_alphab = rev_alphab - 1;
	}
}
