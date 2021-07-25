/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:14:00 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/19 16:28:05 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = power;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		i = nb * ft_recursive_power(nb, power - 1);
	return (i);
}
