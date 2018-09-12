/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:41:35 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/09 18:03:13 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int **sudoku, int line, int col)
{
	int check_line;

	check_line = 0;
	while (check_line < 9)
	{
		if (check_line != line)
		{
			if (sudoku[check_line][col] == sudoku[line][col])
				return (0);
		}
		check_line++;
	}
	return (1);
}
