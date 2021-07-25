/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:42:06 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/20 10:14:22 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		temp;
	int		*ptr;

	temp = min;
	i = 1;
	if (min >= max)
		return (NULL);
	while (temp < max)
	{
		temp++;
		i++;
	}
	ptr = (int *)malloc(sizeof(int) * i);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
