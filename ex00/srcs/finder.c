/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:46:38 by azaliaus          #+#    #+#             */
/*   Updated: 2018/02/25 22:09:15 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

void	ft_print_ans(int n, int x, int y, t_bool *printed)
{
	if (*printed)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(n);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	*printed = TRUE;
}

void	ft_find_rush(char *str, int x, int y)
{
	t_bool	printed;
	char	*rush;
	int		i;

	printed = FALSE;
	i = 0;
	while (i < 5)
	{
		rush = ft_load_rush(i, x, y);
		if (!ft_strcmp(str, rush))
			ft_print_ans(i, x, y, &printed);
		free(rush);
		i++;
	}
	if (!printed)
		ft_print_error();
	ft_putchar('\n');
}
