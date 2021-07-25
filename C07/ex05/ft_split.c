/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 15:37:41 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/22 11:30:21 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	in(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_malloc(char *str, char *charset)
{
	int		a;
	int		i;
	int		j;
	int		compt;

	i = 0;
	compt = 0;
	while (str[i])
	{
		j = 0;
		a = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				a = 1;
			j++;
		}
		if (a == 0 && (in(str[i - 1], charset) == 1) && i != 0)
			compt++;
		if (a == 0 && i == 0)
			compt++;
		i++;
	}
	return (compt);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i] && in(str[i], charset) == 0)
		i++;
	if (i < 1)
		return (NULL);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	while (j < i && str[j] != 0)
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**Mothertab;
	int		j;
	int		i;

	j = 0;
	i = 0;
	Mothertab = malloc(sizeof(char *) * (ft_malloc(str, charset) + 1));
	if (!Mothertab)
		return (NULL);
	while (j < ft_malloc(str, charset))
	{
		while (in(str[i], charset) == 1)
			i++;
		Mothertab[j] = ft_strdup(str + i, charset);
		j++;
		while ((in(str[i], charset) == 0) && str[i])
			i++;
	}	
	Mothertab[j] = 0;
	return (Mothertab);
}
