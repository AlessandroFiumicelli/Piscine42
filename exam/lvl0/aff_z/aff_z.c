/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:22:37 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/14 16:28:58 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_aff_z(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
		{
			ft_putchar('z');
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('z');
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	else
		ft_aff_z(argv[1]);
	return (0);
}
