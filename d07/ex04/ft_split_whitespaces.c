/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:54:24 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/12 18:08:12 by alfiumic         ###   ########.fr       */
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

int		ft_custom_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != ' ' && str[cnt] != '\t' && str[cnt] != '\n'
			&& str[cnt] && str[cnt] != '\v')
		cnt++;
	return (cnt);
}

char	**ft_split_whitespaces(char *str)
{
	int		cnt;
	int		ind;
	int		num;
	int		len;
	char	**matrix;

	ind = 0;
	num = ft_count_word(str);
	if (!(matrix = (char **)malloc(sizeof(char *) * num + 1)))
		return (NULL);
	cnt = 0;
	while (ind < num)
	{
		while (str[cnt] && (str[cnt] == ' ' ||
				str[cnt] == '\v' || str[cnt] == '\t' || str[cnt] == '\n'))
			cnt++;
		len = ft_custom_strlen(&str[cnt]);
		matrix[ind] = (char*)malloc((sizeof(char) * len) + 1);
		matrix[ind] = ft_strncpy(matrix[ind], &str[cnt], len);
		ind++;
		cnt += len;
	}
	matrix[ind] = NULL;
	return (matrix);
}
