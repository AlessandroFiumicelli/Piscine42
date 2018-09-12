/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:05:33 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/12 13:29:01 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		average;

	average = max - min;
	if (min >= max)
		return (0);
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
