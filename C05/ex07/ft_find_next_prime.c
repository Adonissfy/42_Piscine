/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:29:40 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/19 19:05:35 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb == 2)
		return (2);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb));
}
