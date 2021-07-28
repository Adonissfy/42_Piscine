/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:37:47 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 17:43:09 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	char_to_int(char *str)
{
	int	a;
	int	j;

	a = 0;
	j = 0;
	while (str[a] >= 48 && str[a] < 58)
	{
		j = j * 10 + (str[a] - 48);
		a++;
	}
	return (j);
}

int	negative(int nb, int nbr)
{
	if (nbr % 2 != 0)
		return (nb * -1);
	else
		return (nb);
}

int	ft_atoi(char *str)
{
	int	compt;
	int	i;
	int	nbr;

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
		if (!(str[i] >= 48 && str[i] < 58))
			return (0);
		else
			return (negative(char_to_int(&str[i]), nbr));
	}
	return (0);
}
