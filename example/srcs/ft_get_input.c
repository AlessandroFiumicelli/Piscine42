
#include "../includes/rush2.h"

char	*ft_get_input(void)
{
	int		ret;
	int		total;
	char	buf[BUF_SIZE + 1];
	char	*tmp;
	char	*str;

	total = 0;
	while ((ret = read(0, &buf, BUF_SIZE)))
	{
		total += ret;
		buf[ret] = '\0';
		if (total == ret)
		{
			str = malloc(sizeof(char) * total + 1);
			ft_strcat(str, buf);
		}
		else
		{
			tmp = malloc(sizeof(char) * total + 1);
			ft_strcat(tmp, str);
			free(str);
			str = ft_strcat(tmp, buf);
		}
	}
	return (str);
}
