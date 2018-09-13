/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:53:50 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/13 19:06:07 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncopy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

char	*ft_strdup(char *src)
{
	int		size_src;
	char	*dup;

	size_src = ft_strlen(src);
	if (!(dup = (char*)malloc(sizeof(char) * (size_src + 1))))
		return (NULL);
	return (ft_strcpy(dup, src));
}

struct		s_stock_par	*ft_param_to_tab(int ac, char **av)
{
}
