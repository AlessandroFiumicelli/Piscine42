/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:19:40 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/03 19:04:52 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while ((nb % i) != 0)
	{
		if (i > nb)
			return (0);
		i++;
	}
	if (nb == i)
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_is_prime(247526988));
	return(0);
}