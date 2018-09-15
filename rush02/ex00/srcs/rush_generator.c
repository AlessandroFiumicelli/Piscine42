/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_generator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:26:58 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/15 17:12:17 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

char		ft_rush(int x, int y, char *cols, int *lines);

char		*ft_from_charset(int n);

void		rush(char **str, int n, int x, int y);

char		*ft_load_rush(int n, int x, int y);
