/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:49:41 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/15 12:55:39 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);

int	check(int temp, char *base)
{
	int	tamp;
	int	tamp2;

	tamp = temp;
	while (base[temp])
	{			
		if (ft_isspace (base[temp] == 1))
			return (0);
		if (base[temp] == '-' || base[temp] == '+')
			return (0);
		temp++;
	}
	while (base[tamp])
	{	
		tamp2 = tamp + 1;
		while (base[tamp2])
		{
			if (base[tamp] == base[tamp2])
				return (0);
			tamp2++;
		}
		tamp++;
	}
	return (1);
}

int	ft_len_base(char *base)
{
	int	a;

	a = 0;
	while (base[a])
		a++;
	return (a);
}

int	ft_isspace(char c)
{
	int		r;
	char	*whitespaces;

	whitespaces = " \f\n\r\t\v";
	r = 0;
	while (r < 6)
	{
		if (c == whitespaces[r])
			return (1);
		r++;
	}
	return (0);
}

int	char_to_int(char *str, int nbr, char *base, int i)
{
	int	a;
	int	j;

	a = 0;
	j = 0;
	while (str[i])
	{
		while (base[a])
		{
			if (base[a] == str[i])
			{
				j = j * ft_len_base(base) + a;
			}
			a++;
		}
		a = 0;
		i++;
	}
	if (nbr % 2 != 0)
		return (j * -1);
	else
		return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int	compt;
	int	i;
	int	nbr;
	int	temp;

	compt = 0;
	i = 0;
	nbr = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				nbr++;
			i++;
		}
		temp = 0;
		if (check(temp, base) == 0)
			return (0);
		return (char_to_int(str, nbr, base, i));
	}
	return (0);
}
