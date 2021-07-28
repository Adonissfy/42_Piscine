/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:18:52 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 12:26:24 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sensneg;
	int	senspos;
	int	nul;

	i = 0;
	senspos = 0;
	sensneg = 0;
	nul = 0;
	if (length == 0)
		return (1);
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			senspos++;
		if ((*f)(tab[i], tab[i + 1]) == 0)
			nul++;
		if ((*f)(tab[i], tab[i + 1]) > 0)
			sensneg++;
		i++;
	}
	if (((senspos + nul) == length - 1) || ((sensneg + nul) == length - 1))
		return (1);
	return (0);
}
