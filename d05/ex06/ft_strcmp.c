/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:40:22 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/09 15:00:00 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *n1, char *n2)
{
	unsigned int i;

	i = 0;
	while (n1[i] != '\0' && n2[i] != '\0')
	{
		if (n1[i] != n2[i])
			return (n1[i] - n2[i]);
		i++;
	}
	return (n1[i] - n2[i]);
}
