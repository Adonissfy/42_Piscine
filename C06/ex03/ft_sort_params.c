/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:33:15 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/16 10:56:53 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **tab, int i)
{
	char	*buffer;

	buffer = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = buffer;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	c = 1;
	while (c < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(argv, i);
			}
			i++;
		}
		c++;
	}
	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c++;
	}
}
