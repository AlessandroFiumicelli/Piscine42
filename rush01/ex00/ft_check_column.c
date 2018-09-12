/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:41:35 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/09 17:59:26 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_column(int **sudoku, int line, int col)
{
	int		check_col;

	check_col = 0;
	while (check_col < 9)
	{
		if (check_col != col)
		{
			if (sudoku[line][check_col] == sudoku[line][col])
				return (0);
		}
		check_col++;
	}
	return (1);
}
