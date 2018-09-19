/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:10:29 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/19 13:32:12 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	get_operation(char *operation)
{
	if (operation[0] == '\0')
		return (-1);
	if (operation[0] == '+')
		return (0);
	if (operation[0] == '-')
		return (1);
	if (operation[0] == '*')
		return (2);
	if (operation[0] == '/')
		return (3);
	if (operation[0] == '%')
		return (4);
	return (-1);
}

int	ft_calculator(int a, int b, int operator)
{
	int	(*operation[5])(int, int);

	operation[0] = ft_add;
	operation[1] = ft_sub;
	operation[2] = ft_mul;
	operation[3] = ft_div;
	operation[4] = ft_mod;
	return ((operation[operator])(a, b));
}

int	main(int argc, char **argv)
{
	int	result;
	int	operator;

	if (argc != 4)
		return (0);
	operator = get_operation(argv[2]);
	if (operator == -1)
	{
		ft_putstr("0\n");
		return (0);
	}
	else if (operator == 3 && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : divison by zero\n");
		return (0);
	}
	else if (operator == 4 && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	result = ft_calculator(ft_atoi(argv[1]), ft_atoi(argv[3]), operator);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
