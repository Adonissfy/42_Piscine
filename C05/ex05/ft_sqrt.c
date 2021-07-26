/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:26:08 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/19 16:31:10 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (x < nb && i < 46340)
	{
		x = i * i;
		i++;
	}
	if (x == nb)
		return (i - 1);
	return (0);
}