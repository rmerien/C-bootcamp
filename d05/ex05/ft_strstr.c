/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 12:33:27 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/16 12:33:29 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int count;

	count = 0;
	if (!to_find)
		return (str);
	while (str[count] != '\0')
	{
		i = 0;
		while (str[count + i] == to_find[i])
			while (str[count + i] == to_find[i])
				i++;
		if (to_find[i] == '\0')
			return (&str[count]);
		count++;
	}
	return (0);
}
