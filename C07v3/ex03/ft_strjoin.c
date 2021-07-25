/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:35:27 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/22 14:09:11 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_conc(char *mytab, char **strs, int	size, char *sep)
{
	int	a;
	int	i;
	int	j;

	a = 0;
	j = 0;
	while (a < size)
	{
		i = 0;
		while (strs[a][i])
		{
			mytab[j] = strs[a][i];
			i++;
			j++;
		}
		i = 0;
		while (sep[i] && (a < size - 1))
			mytab[j++] = sep[i++];
		a++;
	}
	mytab[j] = '\0';
	return (mytab);
}

int	ft_strlen(char *sep, int size)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i * (size - 1));
}

int	sizetotal(char **strs, int size)
{
	int	total;
	int	a;
	int	i;

	a = 0;
	i = 0;
	total = 0;
	while (a < size)
	{
		while (strs[a][i])
		{
			i++;
			total++;
		}
		i = 0;
		a++;
	}
	total++;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mytab;

	if (size == 0)
	{
		mytab = malloc(sizeof(char));
		mytab[0] = 0;
		return (mytab);
	}
	mytab = malloc(sizeof(char *) * (sizetotal(strs, size)
				+ ft_strlen(sep, size)));
	if (!mytab)
		return (NULL);
	return (ft_conc(mytab, strs, size, sep));
}
