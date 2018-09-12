/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:36:11 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/09 18:53:16 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_check_line(int **sudoku, int line, int col);
int		ft_check_column(int **sudoku, int line, int col);
int		ft_check_grille(int **sudoku, int line, int col);
void	ft_putchar(char c);
void	ft_putstr(char *str, int n);
int		ft_strlen(char *str);

void	ft_rush01(int **sudoku, int line, int col)
{
	if (sudoku[line][col] == 0)
	{
		while (line < 9)
		{
			while (col < 9)
			{
				if (ft_check_line(sudoku, line, col) && 
						(ft_check_column(sudoku, line, col))
						 && (ft_check_grille(sudoku, line, col)))
							ft_rush01(sudoku, line, col + 1);
				}	
				if (sudoku[line][col] < 9)
					sudoku[line][col]++;
				else if (sudoku[line][col] > 8)
					col++;
			}
			col = 0;
			line++;
		}
}

void	ft_print_sudoku(int *str)
{
	int col;

	col = 0;
	while (col < 9)
	{
		ft_putchar((char)str[col] + 48);
		if (col != 8)
			ft_putchar(' ');
		col++;
	}
}

int		*ft_tab(char *str)
{
	int		*tab;
	int		col;

	tab = (int*)malloc(sizeof(*tab) * 9);
	col = 0;
	while (col < 9)
	{
		if (str[col] == '.')
			tab[col] = 0;
		else
			tab[col] = str[col] - 48;
		col++;
	}
	return (tab);
}

int		ft_print_error(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc != 10)
	{
		ft_putstr("Error\n", 6);
		return (0);
	}
	while (i < argc)
	{
		if (ft_strlen(argv[i]) != 9)
		{
			ft_putstr("Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		**mat;
	int		i;

	mat = (int**)malloc(sizeof(*mat) * 9);
	if (!(ft_print_error(argc, argv)))
		return (0);
	i = 0;
	while (i < argc)
	{
		mat[i] = ft_tab(argv[i]);
		i++;
	}
	i = 1;
	ft_rush01(mat, 0, 0);
	while (i < 9)
	{
		ft_print_sudoku(mat[i]);
		ft_putchar('\n');
		i++;
	}
	free(mat);
	return (0);
}
