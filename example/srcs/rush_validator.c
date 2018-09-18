
#include "../includes/rush2.h"

t_bool	ft_validate_lines(char *str, int x, int y)
{
	int i;
	int line;
	int len;

	i = 0;
	line = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			if (x != len)
				return (FALSE);
			line++;
			len = 0;
		}
		else
			len++;
		i++;
	}
	if (y != line)
		return (FALSE);
	return (TRUE);
}

void	ft_get_dimentions(char *str, int *x, int *y)
{
	int i;

	i = 0;
	*x = 0;
	*y = 0;
	while (str[*x] != '\n' && str[*x] != '\0')
		*x += 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			*y += 1;
		i++;
	}
	if (!ft_validate_lines(str, *x, *y))
	{
		*x = 0;
		*y = 0;
	}
}
