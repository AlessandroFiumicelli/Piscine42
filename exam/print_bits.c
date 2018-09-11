/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 20:54:32 by exam              #+#    #+#             */
/*   Updated: 2018/09/07 21:11:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	unsigned int	n;
	int 		tab[8];
	int		j;


	n = (unsigned int)octet;
	j = 7;	
	while (n >= 2)
	{
		tab[j] = n % 2;
		n = n / 2;
		j--;
	}
	tab[j] = n % 2;
	j--;
	while (j >= 0)
	{
		tab[j] = 0;
		j--;
	}
	j = 0;
	while (j < 8)
	{
		ft_putchar(tab[j] + 48);
		j++;
	}
}


int	main(void)
{
	print_bits(10);
	return (0);
}
