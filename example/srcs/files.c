/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:44:59 by azaliaus          #+#    #+#             */
/*   Updated: 2018/02/25 22:08:11 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

char	*ft_get_input(void)
{
	int		ret;
	int		total;
	char	buf[BUF_SIZE + 1];
	char	*tmp;
	char	*str;

	total = 0;
	while ((ret = read(0, &buf, BUF_SIZE))) //while (ret) ==   while(ret != 0)
	{
		total += ret;
		buf[ret] = '\0';
		if (total == ret)
		{
			str = malloc(sizeof(char) * total + 1);// while( )str[cnt] = '\0'
			ft_strcat(str, buf);
		}
		else
		{
			tmp = malloc(sizeof(char) * total + 1);
			ft_strcat(tmp, str);
			//free(str);
			str = ft_strcat(tmp, buf);
		}
		//memset 0 buff
	}
	return (str);
}
