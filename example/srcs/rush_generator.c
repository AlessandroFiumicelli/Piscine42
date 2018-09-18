
#include "../includes/rush2.h"

char	ft_rush(int x, int y, char *cols, int *lines)
{
	if (lines[0] == 0)
	{
		if (lines[1] == 0)
			return (cols[0]);
		else if (lines[1] == (x - 1))
			return (cols[2]);
		else
			return (cols[1]);
	}
	else if (lines[0] == (y - 1))
	{
		if (lines[1] == 0)
			return (cols[4]);
		else if (lines[1] == (x - 1))
			return (cols[5]);
		else
			return (cols[1]);
	}
	else if (lines[1] == 0 || lines[1] == (x - 1))
		return (cols[3]);
	else
		return (' ');
}

char	*ft_form_charset(int n)
{
	char	*cols;

	if (!(cols = (char *)malloc(sizeof(char) * 7)))
		return (0);
	if (n == 0)
		ft_strcpy(cols, "o-o|oo");
	else if (n == 1)
		ft_strcpy(cols, "/*\\*\\/");
	else if (n == 2)
		ft_strcpy(cols, "ABABCC");
	else if (n == 3)
		ft_strcpy(cols, "ABCBAC");
	else
		ft_strcpy(cols, "ABCBCA");
	return (cols);
}

void	rush(char **str, int n, int x, int y)
{
	int		cpt[2];
	int		i;
	char	*src;
	char	*charset;

	cpt[0] = -1;
	i = 0;
	charset = ft_form_charset(n);
	src = *str;
	while (++cpt[0] < y && (cpt[1] = -1))
	{
		while (++cpt[1] < x)
		{
			src[i] = ft_rush(x, y, charset, cpt);
			i++;
		}
		src[i] = '\n';
		i++;
	}
	free(charset);
	src[i] = '\0';
}

char	*ft_load_rush(int n, int x, int y)
{
	int		size;
	char	*ret;
	char	*cpy;

	size = (x + 1) * y;
	if (!(ret = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	cpy = ret;
	rush(&ret, n, x, y);
	return (cpy);
}
