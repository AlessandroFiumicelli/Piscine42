/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:54:24 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/11 16:30:48 by alfiumic         ###   ########.fr       */
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
		if (cnt == 0 && str[cnt] > 32)
			num++;
		else if (str[cnt] > 32 && str[cnt - 1] >= 9 && str[cnt - 1] <= 11)
			num++;
		else if (str[cnt] > 32 && str[cnt - 1] == 32)
			num++;
		cnt++;
	}
	return (num);
}

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

int		ft_custom_strlen(char *str, int word)
{
	int		i;
	int		j;
	int		wrdlen;

	i = 0;
	j = 0;

	while (j < word)
	{ 
		if (i == 0 && str[i] > 32)
			i++;
		if (str[i] > 32 && (str[i - 1] == 9
					|| str[i - 1] == 10 || str[i - 1] == 11
					|| str[i - 1] == 32))
		{
			j++;
		}
		i++;
	}
	while (str[i] != 32 || str[i] > 11 || str[i] < 9)
	{
		i++;
		wrdlen++;
	}
	return (worlen);`
}

char	**ft__split_whitespaces(char *str)
{
	int		cnt;
	int		n_word;
	char	**matrix;
	int		lenword;

	n_word = ft_count_word(str);
	if (n_word == 0)
		return ("NULL");
	if (!(matrix = (char**)malloc(sizeof(**matrix) * n_word + 1)))
		return (0);
	cnt = 1;
	lenword = 1;
	while (cnt < n_word)
	{
		if (!(matrix = (char*)malloc(sizeof(char) * ft_custom_strlen(str, lenword) + 1)))
			return (0);
		matrix[cnt] = ft_strncpy(matrix[cnt], &str[cnt], len);
		cnt++;
		lenword++;
	}
	matrix[cnt] = NULL;
	return (matrix);
}
