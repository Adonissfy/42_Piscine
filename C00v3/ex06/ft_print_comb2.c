/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:31:30 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/14 12:21:30 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	write_char(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{	
		while (b <= 99)
		{
			write_char(a, b);
			b = b + 1;
		}
		a++;
		b = a + 1;
	}
}

void	write_char(int a, int b)
{
	char	c;
	char	d;
	char	e;
	char	f;

	c = (a / 10 + '0');
	d = (a % 10 + '0');
	e = (b / 10 + '0');
	f = (b % 10 + '0');
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}
