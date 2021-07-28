/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:11:23 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 13:15:36 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char **tab, int i)
{
	char	*buffer;

	buffer = *(tab + i);
	*(tab + i) = *(tab + i + 1);
	*(tab + i + 1) = buffer;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	c;

	c = 0;
	while (c < ft_strlen(tab) - 1)
	{
		if ((*cmp)(*(tab + c), *(tab + c + 1)) > 0)
		{
			ft_swap(tab, c);
			c = -1;
		}
		c++;
	}
}
