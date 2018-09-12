/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:05:04 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/02 18:26:31 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
