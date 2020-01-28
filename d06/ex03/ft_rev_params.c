/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:40:18 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/14 09:46:50 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int arg;

	argc = argc - 1;
	while (argc > 0)
	{
		arg = 0;
		ft_putstr(&argv[argc][arg]);
		ft_putchar('\n');
		argc--;
	}
}
