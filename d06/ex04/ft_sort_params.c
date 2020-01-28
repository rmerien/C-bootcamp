/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:20:14 by rmerien           #+#    #+#             */
/*   Updated: 2018/08/10 11:40:31 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int			ft_strcmp(char *n1, char *n2)
{
	unsigned int	i;

	i = 0;
	while (n1[i] != '\0' && n2[i] != '\0')
	{
		if (n1[i] != n2[i])
			return (n1[i] - n2[i]);
		i++;
	}
	return (n1[i] - n2[i]);
}

void		ft_display(int i, int argc, char **str)
{
	while (i++ < argc - 1)
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		tru;
	char	*tmp;

	tru = 1;
	while (tru)
	{
		tru = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				tru = 1;
			}
			i++;
		}
	}
	i = 0;
	ft_display(i, argc, &argv[i]);
	return (0);
}
