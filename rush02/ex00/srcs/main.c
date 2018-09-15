/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:02:36 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/15 17:10:37 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

int			main(void)
{
	char	*str;
	int		x;
	int		y;

	str = ft_get_input();
	if (!str)
	{
		ft_print_error();
		ft_putchar('\n');
		return (0);
	}
	ft_get_dimentions(str, &x, &y);
	if (x < 1 || y < 1)
	{
		ft_print_error();
		ft_putchar('\n');
		return (0);
	}
	ft_find_rush(str, x, y);
	return (0);
}
