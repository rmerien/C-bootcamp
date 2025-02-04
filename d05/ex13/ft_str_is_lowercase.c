/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:46:54 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/08 17:47:44 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] < 123 && str[i] > 96)
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
