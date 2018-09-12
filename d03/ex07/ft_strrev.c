/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:57:40 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/03 14:45:27 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		s;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	if (str)
	{
		s = 0;
		while (s < i)
		{
			tmp = str[i];
			str[i] = str[s];
			str[s] = tmp;
			s++;
			i--;
		}
	}
	return (str);
}

int		main(void)
{
	char str[5] = "ciao";

	ft_strrev(str);
	return (0);
}
