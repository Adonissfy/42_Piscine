/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:49:20 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/18 10:28:07 by emortier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

#include "Rush01.h"

void	ft_putsudoku(char **sudoku, int x)
{
	int	temp;
	int	i;
	int	j;

	temp = x;
	i = 1;
	j = 1;
	while (i <= x)
	{
		while (j <= x)
		{
			write(1, &sudoku[i][j], 1);
			if (j < x)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		j = 1;
		i++;
	}
}
