/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:27:58 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/19 19:19:13 by llassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_strcpy(char *dest, char *src, int n);
void	ft_putchar(char c);
void	ft_putnbr(int i);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_colle00(char *src, int x, int y);
int		ft_colle01(char *src, int x, int y);
int		ft_colle02(char *src, int x, int y);
int		ft_colle03(char *src, int x, int y);
int		ft_colle04(char *src, int x, int y);
int		ft_line(char *str);
int		ft_longueur(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_create(char *test, int longueur, char a, char z, char m);
int		ft_compare(char *str, int x, int y);
int		ft_verif(char *str, int x);
void	ft_display00(int x, int y);
void	ft_display01(int x, int y);
void	ft_display02(int x, int y);
void	ft_display03(int x, int y, int answ);
void	ft_display04(int x, int y, int answ);
char	*get_str(void);


#endif
