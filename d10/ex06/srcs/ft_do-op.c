
#include "../includes/ft.h"

int	get_operator(char *operator)
{
	if (operator[1] != '\0')
		return (-1);
	else if (operator[0] == '+')
		return (0);
	else if (operator[0] == '-')
		return (1);
	else if (operator[0] == '*')
		return (2);
	else if (operator[0] == '/')
		return (3);
	else if (operator[0] == '%')
		return (4);
	return (-1);
}

int	ft_calculator(int a, int b, int operator)
{
	int	(*operator[5](int, int));

	operator[0] = &ft_add;
	operator[1] = &ft_sub;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_mod;
	return ((operator[operator])(a, b));
}


int	main(int argc, char **argv)
{
	int	result;
	int	operator;

	result = 0;
	if (argc != 4)
		return (0);
	operator = get_operator(argv[2]);
	if (operator = -1)
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
