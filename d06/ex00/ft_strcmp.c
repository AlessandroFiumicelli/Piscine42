/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:02:58 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/03 20:36:55 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i] || !s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i] || !s2[i])
			return (-(s2[i] - s1[i]));
		i++;
	}
	return (0);
}