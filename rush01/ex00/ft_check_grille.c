/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_grille.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:47:55 by alfiumic          #+#    #+#             */
/*   Updated: 2018/09/09 18:06:13 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_grille(int **sudoku, int line, int col)
{
	int		check_line;
	int		check_col;
	int		max_line;
	int		max_col;

	check_line = line;
	check_col = col;
	check_line = check_line / 3;
	check_line = check_line * 3;
	check_col = check_col / 3;
	check_col = check_col * 3;
	max_line = check_line + 2;
	max_col = check_col + 2;
	while (check_line <= max_line)
	{
		while (check_col <= max_col)
		{
			if (col != check_col && line != check_line)
			{
				if (sudoku[check_line][check_col] == sudoku[line][col])
					return (0);
			}
			check_col++;
		}
		check_col = check_col - 2;
		check_line++;
	}
	return (1);
}
