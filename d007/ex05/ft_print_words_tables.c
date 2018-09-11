
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	unsigned int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putstr(str[i]);
			i++;
		}
	}
}
