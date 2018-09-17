/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:57:24 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/17 17:58:50 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int long	n;

	n = (long int)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n < 10)
	{
		ft_putchar(n + 48);
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		index;

	index = 0;
	while (par[index].str)
	{
		ft_putstr(par[index].str);
		ft_putchar('\n');
		ft_putnbr(par[index].size_param);
		ft_putchar('\n');
		i = 0;
		while (par[index].tab[i])
		{
			ft_putstr(par[index].tab[i]);
			ft_putchar('\n');
			i++;
		}
		index++;
	}
}
