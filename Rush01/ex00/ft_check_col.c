/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:40:46 by emortier          #+#    #+#             */
/*   Updated: 2021/07/18 11:00:51 by emortier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_same_col(int x, int y, char c, char **col)
{
	x--;
	if (x == 1 && col[1][y] != col[2][y])
		return (1);
	while (c != col[x][y] && x >= 1)
		x--;
	if (x == 0)
		return (1);
	return (0);
}

int	ft_check_col(int y, int x, char **sudoku)
{
	int	nb_view;
	int	max;

	nb_view = 1;
	max = sudoku[x][y];
	while (x >= 2)
	{
		if (ft_check_same_col(x, y, sudoku[x][y], sudoku) == 0)
			return (0);
		if (sudoku[x][y] > sudoku[x - 1][y])
			nb_view++;
		if (sudoku[x - 1][y] > max)
		{
			nb_view = 1;
			max = sudoku[x - 1][y];
		}
		x--;
	}
	return (nb_view);
}
