/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r01.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:01:49 by amerrouc          #+#    #+#             */
/*   Updated: 2018/08/12 20:12:37 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef R01_H
# define R01_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		*crea_tab(int n);

int		check_char(char **tab);

int		check_line(int **tab, int i);

int		check_col(int **tab, int i);

int		check_sqr(int **tab, int nb);

int		check_tab(char **tab);

int		**tab_to_int(char **tab);

void	c_l_cube(int *c_val, int *l_val, int nb);

int		verification(int *verif);

int		**poss_val(int **tab);

int		*check(int **tab, int i, int j);

int		**tab_auth(int nb_zer, int **tab);

int		count_zer(int **tab);

int		**solve(int **sudo, int **nul_pts, int nb_nul, int *end);

void	display(int **sudo);

#endif
