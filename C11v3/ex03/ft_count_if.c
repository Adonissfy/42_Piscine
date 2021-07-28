/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:06:08 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 13:06:09 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < length)
		if ((*f)(tab[i]) != 0)
			count++;
	return (count);
}
