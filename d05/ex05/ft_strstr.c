/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:17:12 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/11 16:17:21 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		str_size;
	int		to_find_size;
	int		i;
	int		j;

	i = 0;
	str_size = ft_strlen(str);
	to_find_size = ft_strlen(to_find);
	while (i < (str_size - to_find_size) + 1)
	{
		j = 0;
		while (j < to_find_size)
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (j == to_find_size)
			return (str + i);
		i++;
	}
	return ("(null)");
}
