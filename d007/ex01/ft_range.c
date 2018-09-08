/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:05:33 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/08 21:41:18 by alfiumic         ###   ########.fr       */
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
	if (average <= 0)
		return (range);
	i = 0;;
	if(!(range = (int *)malloc(sizeof(*int) * average)))
		return (0);
	while (i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
