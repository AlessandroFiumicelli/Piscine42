/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:54:24 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/10 17:52:56 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		ft_count_word(char *str)
{
	int		cnt;
	int		num;

	cnt = 0;
	num = 0;
	if (!str)
		return (0);
	while (str[cnt])
	{
		while (str[cnt] && (str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\v' || str[cnt] == '\n'))
			cnt++;
		while (str[cnt] && (str[cnt] != ' ' || str[cnt] != '\t' || str[cnt] != '\v' || str[cnt] != '\n'))
			cnt++;
		cnt++;
		num++;
	}
	return (num);
}/*
char	*ft_strncpy(char *dest, char *src, int size)
{
	int		i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft__split_whitespaces(char *str)
{
	int		cnt;
	int		n_word;
	char	**matrix;

	n_word = ft_count_word(str);
	if (n_word == 0)
		return ("NULL");
	matrix = (char **)malloc(sizeof(char *) * n_word + 1);
}*/

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	printf("%d",ft_count_word(argv[1]));
	return (0);
}
