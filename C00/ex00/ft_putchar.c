/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:50:24 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/07 14:05:17 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
