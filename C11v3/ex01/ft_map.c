/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:15:37 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 11:17:17 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*mytab;

	i = 0;
	mytab = malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		mytab[i] = (*f)(tab[i]);
		i++;
	}
	mytab[i] = '\0';
	return (mytab);
}
