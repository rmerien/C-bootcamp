/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:28:06 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/10 10:32:48 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_hour(int hour)
{
	if (hour == 0 || hour == 24)
		write(1, " 12.00 A.M. AND 1.00 A.M.", 58);
	if (hour == 1)
		write(1, " 1.00 A.M. AND 2.00 A.M.", 57);
	if (hour == 2)
		write(1, " 2.00 A.M. AND 3.00 A.M.", 57);
	if (hour == 3)
		write(1, " 3.00 A.M. AND 4.00 A.M.", 57);
	if (hour == 4)
		write(1, " 4.00 A.M. AND 5.00 A.M.", 57);
	if (hour == 5)
		write(1, " 5.00 A.M. AND 6.00 A.M.", 57);
	if (hour == 6)
		write(1, " 6.00 A.M. AND 7.00 A.M.", 57);
	if (hour == 7)
		write(1, " 7.00 A.M. AND 8.00 A.M.", 29);
	if (hour == 8)
		write(1, " 8.00 A.M. AND 9.00 A.M.", 24);
	if (hour == 9)
		write(1, " 9.00 A.M. AND 10.00 A.M.", 57);
}

void		ft_hour2(int hour)
{
	if (hour == 10)
		write(1, " 10.00 A.M. AND 11.00 A.M.", 59);
	if (hour == 11)
		write(1, " 11.00 A.M. AND 12.00 P.M.", 59);
	if (hour == 12)
		write(1, " 12.00 P.M. AND 1.00 P.M.", 58);
	if (hour == 13)
		write(1, " 1.00 P.M. AND 2.00 P.M.", 57);
	if (hour == 14)
		write(1, " 2.00 P.M. AND 3.00 P.M.", 57);
	if (hour == 15)
		write(1, " 3.00 P.M. AND 4.00 P.M.", 57);
	if (hour == 16)
		write(1, " 4.00 P.M. AND 5.00 P.M.", 57);
	if (hour == 17)
		write(1, " 5.00 P.M. AND 6.00 P.M.", 57);
}

void		ft_hour3(int hour)
{
	if (hour == 18)
		write(1, " 6.00 P.M. AND 7.00 P.M.", 57);
	if (hour == 19)
		write(1, " 7.00 P.M. AND 8.00 P.M.", 57);
	if (hour == 20)
		write(1, " 8.00 P.M. AND 9.00 P.M.", 57);
	if (hour == 21)
		write(1, " 9.00 P.M. AND 10.00 P.M.", 59);
	if (hour == 22)
		write(1, " 10.00 P.M. AND 11.00 P.M.", 59);
	if (hour == 23)
		write(1, " 11.00 P.M. AND 12.00 A.M.", 58);
}

void		ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN", 33);
	ft_hour(hour);
	ft_hour2(hour);
	ft_hour3(hour);
}
