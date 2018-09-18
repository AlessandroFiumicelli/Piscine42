/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:28:02 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/17 19:29:06 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*array;

	if (!(array = (int*)malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = (f)tab[i];
		i++;
	}
	return (array);
}
	
