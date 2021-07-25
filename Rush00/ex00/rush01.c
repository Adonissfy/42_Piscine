/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:21:32 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/10 13:10:21 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_top(int x, int t, int y);
void	print_mid(int y, int t, int x);
void	print_bot(int x, int t, int y);

void	rush(x, y)
{
	int	t;

	t = 1;
	print_top(x, t, y);
	print_mid(y, t, x);
	print_bot(x, t, y);
}

void	print_top(int x, int t, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_putchar('/');
		if (x == 1)
		{
			ft_putchar('\n');
		}
	}
	if (x > 1 && y >= 1)
	{
		while (t != x - 1)
		{
			ft_putchar('*');
			t++;
		}
		ft_putchar(92);
		ft_putchar('\n');
	}
}

void	print_mid(int y, int t, int x)
{
	int	c;

	if (y > 1 && x >= 1)
	{
		c = 0;
		while (c != y - 2)
		{
			if ( x > 1)
			{
				ft_putchar('*');
			}
			while (t != x - 1 && x > 1)
			{
				ft_putchar(' ');
				t++;
			}
			ft_putchar('*');
			ft_putchar('\n');
			c++;
			t = 1;
		}
	}
}

void	print_bot(int x, int t, int y)
{
	if (y > 1)
	{
		ft_putchar(92);
		if (x == 1)
		{
			ft_putchar('\n');
		}
		if (x > 1 && y >= 1)
		{
			while (t != x - 1)
			{
				ft_putchar('*');
				t++;
			}
			ft_putchar('/');
			ft_putchar('\n');
		}
	}
}
