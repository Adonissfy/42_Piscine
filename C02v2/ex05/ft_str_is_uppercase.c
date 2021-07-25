/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:35:27 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/10 20:43:12 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] == 0)
		{
			return (1);
		}
		if (str[compt] < 65 || str[compt] > 90)
		{
			return (0);
		}
		compt++;
	}	
	return (1);
}
