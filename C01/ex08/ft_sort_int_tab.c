/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:08:33 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/09 14:03:57 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	retour(int a, int size, int t, int *tab)
{	
	while (a <= size)
	{
		if (tab[a] <= tab[a + 1])
		{
			t = 0;
			a++;
		}
		else
		{
			t = 1;
			a = size + 1;
		}
	}
	return (t);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	temp;
	int	t;	

	a = 0;
	size = size - 2;
	t = 1;
	while (t == 1)
	{
		t = 0;
		while (a <= size)
		{
			if (tab[a] >= tab[a + 1])
			{	
				temp = tab[a + 1];
				tab[a + 1] = tab[a];
				tab[a] = temp;
			}	
			a ++;
		}
		a = 0;
		t = retour(a, size, t, tab);
	}
}
