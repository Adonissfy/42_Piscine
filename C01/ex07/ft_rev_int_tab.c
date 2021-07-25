/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:03:57 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/09 11:05:56 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	size = size - 1;
	while (a <= size)
	{
		temp = tab[a];
		tab[a] = tab[size];
		tab[size] = temp;
		a++;
		size--;
	}
}
