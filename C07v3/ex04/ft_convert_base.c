/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 08:58:17 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/27 09:52:54 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_tab(char *tab, int size)
{
	int		i;
	int		swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[size - 1 - i];
		tab[size - i - 1] = tab[i];
		tab[i] = swap;
		i++;
	}
}

int	i_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	is_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] < 32
			|| base[i] > 127 || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
