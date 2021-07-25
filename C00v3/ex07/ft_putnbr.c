/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:14:44 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/15 13:39:15 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a >= 0 && a < 10)
		ft_putchar(a + '0');
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}
