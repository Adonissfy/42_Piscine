/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:43:34 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/12 09:49:46 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{	
	unsigned char	a;
	char			t;
	char			v;
	char			*hex;
	int				compt;

	hex = "0123456789abcdef";
	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] >= 32 && str[compt] <= 126)
			write(1, &str[compt], 1);
		else
		{
			a = str[compt];
			t = hex[a / 16];
			v = hex[a % 16];
			write(1, "\\", 1);
			write(1, &t, 1);
			write(1, &v, 1);
		}	
		compt++;
	}
}
