/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:41:53 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/22 15:01:28 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long int	ft_pow(int nb, int power);
int			ft_len(char *c);

int	ft_atoi(char *nb, char *base, long int i)
{
	long int	j;
	long int	a;
	long int	m;

	m = 1;
	a = 0;
	while ((nb[i] >= 9 && nb[i] <= 13) || nb[i] == ' ')
		i++;
	while (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			m = m * -1;
		i++;
	}
	while (nb[i])
	{
		j = 0;
		while (nb[i] != base[j] && base[j])
			j++;
		if (nb[i] != base[j])
			return (a);
		a = ft_len(base) * a + j;
		i++;
	}
	return (a);
}

int	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

char	*ft_to_base(long int nbr, char *base, int size, int sign)
{
	int				j;
	int				i;
	long int		res;
	char			*tab;

	i = size;
	j = ft_len(base);
	tab = malloc((size + sign + 1));
	if (!tab)
		return (0);
	if (sign == 1)
	{
		tab[0] = '-';
		nbr = -nbr;
		i--;
	}
	sign--;
	while (++sign < size)
	{
		res = nbr / ft_pow(j, --i);
		res = res % j;
		tab[sign] = base[res];
	}
	tab[sign] = '\0';
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int		b10;
	long int		i;
	int				sign;
	char			*tab;

	if (ft_test_base(base_from) == 0 || ft_test_base(base_to) == 0)
		return ("\0");
	sign = 0;
	b10 = ft_atoi(nbr, base_from, 0);
	i = 1;
	while ((b10 / i > 0 && b10 > 0) || (b10 / i < 0 && b10 < 0))
	{
		i = i * ft_len(base_to);
		sign++;
	}
	i = sign;
	if (b10 < 0)
		tab = ft_to_base(b10, base_to, ++i, 1);
	else if (b10 == 0)
		tab = ft_to_base(b10, base_to, 1, 0);
	else
		tab = ft_to_base(b10, base_to, i, 0);
	return (tab);
}
int main ()
{
	char basefrom[] = "0123456789";
	char baseto[] = "0123456789ABCDEF";
	char nbr[] = "12345";

	printf("%s\n", ft_convert_base(nbr, basefrom, baseto));
}
