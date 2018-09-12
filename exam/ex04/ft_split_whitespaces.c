/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiumice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:06:29 by afiumice          #+#    #+#             */
/*   Updated: 2018/03/01 15:34:11 by afiumice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_world(char *str)
{
	int cnt;
	int num;

	cnt = 0;
	num = 0;
	if (str)
	{
		while (str[cnt])
		{
			while (str[cnt] &&
					(str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\n'))
				cnt++;
			if (!str[cnt])
				return (num);
			while (str[cnt] &&
					str[cnt] != ' ' && str[cnt] != '\t' && str[cnt] != '\n')
				cnt++;
			num++;
		}
		return (num);
	}
	return (0);
}

int		custom_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != ' ' && str[cnt] != '\t' && str[cnt] != '\n' && str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strncpy(char *dest, char *src, int size)
{
	int cnt;

	cnt = 0;
	while (src[cnt] && cnt < size)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		cnt;
	int		ind;
	int		num;
	int		len;
	char	**array;

	ind = 0;
	num = count_world(str);
	if (num == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * num + 1);
	cnt = 0;
	while (ind < num)
	{
		while (str[cnt] &&
				(str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\n'))
			cnt++;
		len = custom_strlen(&str[cnt]);
		array[ind] = (char*)malloc((sizeof(char) * len) + 1);
		array[ind] = ft_strncpy(array[ind], &str[cnt], len);
		ind++;
		cnt += len;
	}
	array[ind] = NULL;
	return (array);
}
