
int	ft_get_size(int argc, char **argv)
{
	int	i;
	int	j;
	int	lenght;

	i = 0;
	lenght = 0;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			lenght++;
			j++;
		}
		i++;
	}
	lenght += argc - 2;
	return (lenght);
}

char	*ft_concat_params(int argc, char **argv)
{
	int	length;
	char	*str;
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 1;
	length = ft_get_size(argc, argv);
	if(!(str = (char*)malloc(sizeof(char) * lenght)))
		return ("NULL");
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[j] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
