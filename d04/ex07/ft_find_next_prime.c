/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:14:12 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/02 21:19:26 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
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

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
