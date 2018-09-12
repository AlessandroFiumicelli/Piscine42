/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:49:09 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/11 13:21:35 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

long int	ft_base_size(char *str)
{
	long int	base_size;

	base_size = 0;
	while (str[base_size])
	{
		if (str[base_size] == str[base_size + 1])
			return (0);
		else if (str[base_size] == '+' || str[base_size] == '-')
			return (0);
		base_size++;
	}
	if (base_size < 2)
		return (0);
	return (base_size);
}

void		ft_print_base(long int to_print, char *str)
{
	long int	i;

	i = 0;
	while (i != to_print)
		i++;
	ft_putchar(str[i]);
}

long int	ft_neg_or_pos(int nbr)
{
	long int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * (-1);
	}
	else
		n = nbr;
	return (n);
}

void		ft_putnbr_base2(long int n, int base_size, char *base)
{
	if (n > 0)
	{
		ft_putnbr_base2(n / base_size, base_size, base);
		ft_print_base(n % base_size, base);
	}
}

void		ft_putnbr_base(int nbr, char *base)
{
	long int	base_size;
	long int	n;

	if (nbr == -2147483648)
	{
		ft_putnbr_base(-2, base);
		ft_putnbr_base(147483648, base);
	}
	else
	{
		n = ft_neg_or_pos(nbr);
		base_size = ft_base_size(base);
		if (base_size == 0)
			ft_putchar('\0');
		else if (base_size > 0)
		{
			ft_putnbr_base2(n, base_size, base);
		}
	}
}
