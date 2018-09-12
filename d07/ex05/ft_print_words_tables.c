/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:32:41 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/12 12:25:04 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	unsigned int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putstr(tab[i]);
			i++;
		}
	}
}
