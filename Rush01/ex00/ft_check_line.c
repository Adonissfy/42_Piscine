/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:08:02 by emortier          #+#    #+#             */
/*   Updated: 2021/07/18 09:39:25 by emortier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_same(int y, char c, char *line)
{
	y--;
	if (y == 1 && line[1] != line[2])
		return (1);
	while (c != line[y] && y >= 1)
		y--;
	if (y == 0)
		return (1);
	return (0);
}

int	ft_check_line(int y, int x, char **sudoku)
{
	int	nb_view;
	int	max;

	nb_view = 1;
	max = sudoku[x][y];
	while (y >= 2)
	{
		if (ft_check_same(y, sudoku[x][y], sudoku[x]) == 0)
			return (0);
		if (sudoku[x][y] > sudoku[x][y - 1])
			nb_view++;
		if (sudoku[x][y - 1] > max)
		{
			nb_view = 1;
			max = sudoku[x][y - 1];
		}
		y--;
	}
	return (nb_view);
}
