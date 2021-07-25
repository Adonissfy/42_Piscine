/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putparams_intab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:48:52 by czang             #+#    #+#             */
/*   Updated: 2021/07/18 19:26:08 by czang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char **ft_creertab(int i);

void	line1(char **sudo, char **arg, int a)
{
	int		i;
	int		y;

	y = 1;
	i = 0;
	while (i < a)
	{
		sudo[0][y] = arg[1][i];
		i += 2;
		y++;
	}
}

void	line2(char **sudo, char **arg, int a)
{
	int		i;
	int	y;

	i = a;
	y = 1;
	while (i < a * 2)
	{
		sudo[(a / 2) + 1][y] = arg[1][i];
		i += 2;
		y++;
	}	
}

void	col1(char **sudo, char **arg, int a)
{
	int		i;
	int		y;

	y = 1;
	i = a * 2 ;
	while (i < a * 3)
	{
		sudo[y][0] = arg[1][i];
		i += 2;
		y++;
	}
}

void	col2(char **sudo, char **arg, int a)
{
	int	i;
	int	y;

	y = 1;
	i = a * 3 ;
	while (i < a * 4)
	{
		sudo[y][(a / 2) + 1] = arg[1][i];
		i += 2;
		y++;
	}
}

void	ft_tab(char **sudoku, char **argv, int t_tab)
{
	line1(sudoku, argv, t_tab * 2);
	col1(sudoku, argv, t_tab * 2);
	col2(sudoku, argv, t_tab * 2);
	line2(sudoku, argv, t_tab * 2);
}

int	main(int argc, char **argv)
{
	char **sudoku;

	sudoku = ft_creertab(4);
	ft_tab(sudoku, argv, 4);
	int i;

	i = 0;
/*	while (sudoku[i])
	{
		printf("%s\n", sudoku[i]);
		i++;
	}*/
//	ft_tab(sudoku,argv,4);
}
