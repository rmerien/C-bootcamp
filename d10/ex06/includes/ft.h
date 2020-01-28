/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:19:58 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/22 16:50:53 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

int		is_number(char c);
int		is_op(char c);
int		is_neg(char c);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

#endif
