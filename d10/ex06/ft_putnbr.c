/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:21:39 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/18 19:27:36 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int	nb)
{
	unsigned int	n;

	n = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		n = (unsigned int)-nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n < 10)
		ft_putchar(n + 48);
}
