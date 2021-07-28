/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:23:21 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 17:41:20 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	add(int a, int b);
int	substract(int a, int b);
int	divide(int a, int b);
int	multiply(int a, int b);
int	modulo(int a, int b);
int	ft_atoi(char *str);

int	check(char **argv)
{
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

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

int	main(int argc, char **argv)
{
	int	(*operation)(int, int);

	if (argc == 4 && check(argv) == 0)
	{
		if ((argv[2][0]) == '+')
			operation = &add;
		else if ((argv[2][0]) == '-')
			operation = &substract;
		else if ((argv[2][0]) == '/')
			operation = &divide;
		else if ((argv[2][0]) == '*')
			operation = &multiply;
		else if ((argv[2][0]) == '%')
			operation = &modulo;
		else
		{
			write(1, "0\n", 2);
			return (0);
		}
		ft_putnbr((*operation)(ft_atoi(argv[1]), ft_atoi(argv[3])));
		write(1, "\n", 1);
	}
	return (0);
}
