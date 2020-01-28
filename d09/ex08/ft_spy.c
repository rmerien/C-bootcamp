/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:11:16 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/10 01:34:23 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_president(int i, int j, char **argv)
{
	

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = argc - 1;
	j = 0;
	while (argv[i][j] != '\0');
	{
		j = 0;
		while (str[i][j] == ' ')
						j++;
		if (str[i][j] == 'p' || str[i][j] == 'P' || str[i][j] == 'a' 
			|| str[i][j] == 'A' || str[i][j] == 'B' || str[i][j] == 'b')
		{
			if (str[i][j] == 'p' || str[i][j] == 'P')
				ft_president(i, j, argv[i][j]);
		}
