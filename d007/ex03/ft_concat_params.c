/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:23:40 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/10 14:50:48 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_size(int argc, char **argv)
{
	int	i;
	int	j;
	int	length;

	i = 1;
	length = 0;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			length++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		length += argc - 2;
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		length;
	char	*str;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 1;
	length = ft_get_size(argc, argv);
	if (!(str = (char*)malloc(sizeof(char) * length + 1)))
		return ("NULL");
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
