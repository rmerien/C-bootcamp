/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:03:25 by amerrouc          #+#    #+#             */
/*   Updated: 2018/08/12 20:15:18 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "r01.h"

int	main(int argc, char **argv)
{
	int end;
	int **sudo;
	int	**auth;
	int	nb_zer;

	if ((argc < 10) || (check_tab(argv) == 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	sudo = tab_to_int(argv);
	auth = poss_val(sudo);
	nb_zer = count_zer(sudo);
	end = 1;
	sudo = solve(sudo, auth, nb_zer, &end);
	display(sudo);
	return (0);
}
