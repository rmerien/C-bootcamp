/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:35:52 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/23 22:06:17 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	while (**tab)
	{
		if ((*f)(*tab) == 1)
			return (1);
		tab++;
	}
	return (0);
}
