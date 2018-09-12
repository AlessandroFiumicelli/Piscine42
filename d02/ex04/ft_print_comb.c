/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:09:50 by alfiumic          #+#    #+#             */
/*   Updated: 2018/08/29 11:38:38 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = 47;
	while (h <= '9')
	{
		t = ++h;
		while (t <= '9')
		{
			u = ++t + 1;
			while (u <= '9')
			{
				ft_putchar(h);
				ft_putchar(t);
				ft_putchar(u++);
				if (h != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
