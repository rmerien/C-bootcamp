/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:53:19 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/17 11:32:53 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		j;
	int		k;
	int		len_tot;

	k = -1;
	i = -1;
	len_tot = 0;
	while (++i < argc)
		len_tot += ft_strlen(argv[i]);
	i = 1;
	tab = (char *)malloc((len_tot + argc));
	while (i < argc)
	{
		j = 0;
		k++;
		while (argv[i][j] != '\0')
			tab[k++] = argv[i][j++];
		tab[k] = '\n';
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
