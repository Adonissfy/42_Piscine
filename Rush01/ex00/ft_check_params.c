/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:25:53 by czang             #+#    #+#             */
/*   Updated: 2021/07/18 15:31:33 by emortier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	check_terms2(char *a, int b);

void	put_char(char c)
{
	write (1, &c, 1);
}

void	put_Error(void)
{
	put_char('\n');
	write (1, "Error", 5);
}

int	check_terms1(char *a)
{
	int		i;
	int		x;

	i = 0;
	while (a[i])
	{
		if (!(a[i] >= '1' && a[i] <= '9'))
			return (0);
		i += 2;
	}
	i /= 2;
	x = i % 4;
	if (x != 0)
		return (0);
	return (check_terms2(a, i) / 4);
}

int	check_terms2(char *a, int b)
{
	int		i;

	i = 0;
	while (a[i])
	{
		if (a[i] - 48 > b / 4)
			return (0);
		if (i <= b - 2)
			i += 2;
		else
			i++;
	}
	return (b);
}

int	check_params(char **c)
{
	int		i;
	char	a[700];

	i = -1;
	while (c[1][++i])
		a[i] = c[1][i];
	if (!c[1])
	{
		put_Error();
		return (0);
	}	
	if (!(check_terms1(a)))
	{
		put_Error();
		return (0);
	}	
	put_char('\n');
	return (check_terms1(a));
}
