/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:18:11 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/12 19:37:37 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	if (to_find[a] == '\0')
		return (str);
	while (to_find[a])
		a++;
	while (str[i])
	{
		if (str[i] == to_find[b])
		{
			b++;
			if (b == a)
				return (&str[i - b + 1]);
		}
		else
			b = 0;
		i++;
	}
	return (0);
}
