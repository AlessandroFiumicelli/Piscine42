/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:01:58 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/19 12:02:05 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}