/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:31:59 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/18 19:08:38 by czang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	**ft_creertab(int i)
{
	char	**sudoku;
	int		a;
	int		b;

	b = 0;
	a = 0;
	sudoku = (char **)malloc(sizeof(char *) * (i + 2));
	while (b < (i + 2))
	{
		sudoku[b] = (char *)malloc(sizeof(char) * (i + 3));
		//*sudoku[i + 3] = '\0';
		b++;
	}
	b = 0;
	while (b < i + 2)
	{
		a = 0;
		while (a < (i + 2))
		{
			sudoku[b][a] = '0';
			a++;
		}
		b++;
	}
	return (sudoku);
}
