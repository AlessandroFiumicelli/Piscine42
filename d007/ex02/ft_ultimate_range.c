/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:29:55 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/08 21:38:04 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
	int		c;

	i = min;
	c = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	if (!(int*)malloc(sizeof(int) * (size)))
		return (0);
	while (i < max)
	{
		range[c] = i;
		i++;
		c++;
	}
	return (i);
}
