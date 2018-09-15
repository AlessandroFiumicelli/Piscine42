/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:39:21 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/14 16:04:45 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		ft_aff_a(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (argc != 2)
		write(1, "a\n", 2);
	else if (argc == 2)
		ft_aff_a(argv[1]);
	return (0);
}
