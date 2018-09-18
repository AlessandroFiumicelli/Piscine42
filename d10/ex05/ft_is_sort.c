/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:23:50 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/18 17:44:36 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		j;

	i = 0;
	if (length <= 0)
		return (1);
	while (i  < length - 1 && (f)(tab[i], tab[i + 1]) >= 0)
		i++;
	j = 0;
	while (j < length - 1 && (f)(tab[j],tab[j + 1]) <= 0)
		j++;
	if (i == length - 1 || j == length - 1)
		return (1);
	return (0);
}

int        ultimatecomparator(int a, int b)
{
	if (a == b)
		return 0;
	else
		return (a > b ? 1 : -1);
}
