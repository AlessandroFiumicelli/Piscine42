/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:05:33 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/11 13:58:07 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		average;

	average = max - min;
	if ((!min) && (!max))
		return (0);
	if (min >= max)
		return (range);
	i = 0;
	if (!(range = (int *)malloc(sizeof(int) * average)))
		return (0);
	while (i < average)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
