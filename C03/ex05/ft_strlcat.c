/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:16:34 by asaffroy          #+#    #+#             */
/*   Updated: 2021/07/14 17:03:44 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	while ((src[j] != '\0') && (i + 1 < size))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}

int main(void)
{
	char a[]="absc";
	char b[]="gtgtgt";
	char c[]="absc";
	char d[]="gtgtgt";
	unsigned int n = 3;
	printf("Expected output: %i\n",strlcat(a,b,n));
	printf("%s\n",a);
	printf("Output: %i\n",ft_strlcat(c,d,n));
	printf("%s\n",c);
	return (0);
}
