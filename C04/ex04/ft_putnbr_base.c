/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:54:10 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/15 08:43:42 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_len_base(char *base)
{
	int	a;

	a = 0;
	while (base[a])
		a++;
	return (a);
}

int	check(char *base, char c)
{
	int	t;
	int	i;

	t = 0;
	i = 0;
	while (base[i])
	{
		if (c == base[i])
			t++;
		i++;
	}
	if (t > 1)
		return (0);
	t = 0;
	return (1);
}

void	recur(long int nblo, int len_base, char *base, int a)
{
	if (nblo < 0 && a == 0 && len_base > 0)
	{
		write(1, "-", 1);
		nblo = -nblo;
	}
	if (nblo >= 0 && nblo < len_base && a == 0)
	{
		write(1, &base[nblo], 1);
	}
	else
	{
		if (a == 0 && len_base > 0)
		{
			ft_putnbr_base(nblo / len_base, base);
			ft_putnbr_base(nblo % len_base, base);
		}
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			len_base;
	int			j;
	long int	nblo;
	int			a;

	i = 0;
	j = 0;
	a = 0;
	len_base = ft_len_base(base);
	while (base[i])
	{
		j = check(base, base[i]);
		if (j == 0)
			a = 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\0'
			|| len_base <= 1)
			a = 1;
		i++;
	}
	nblo = nbr;
	recur(nblo, len_base, base, a);
}
