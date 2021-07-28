/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:54:21 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/28 17:42:14 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	add(int a, int b)
{
	return (a + b);
}

int	substract(int a, int b)
{
	return (a - b);
}

int	divide(int a, int b)
{
	return (a / b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	modulo(int a, int b)
{
	return (a % b);
}
