/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:50:59 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/16 12:11:19 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;
	int	i;
	int	last;

	len = 0;
	i = 0;
	last = size - 1;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (i < last && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest1[20];
	char	dest2[10];
	unsigned int	len;

	len = ft_strlcpy(dest1, src, 20);
	printf("Destino 1: %s\n", dest1);
	printf("Comprimento da src: %u\n", len);
	len = ft_strlcpy(dest2, src, 10);
	printf("Destino 2: %s\n", dest2);
	printf("Comprimento da src: %u\n", len);
	return (0);
}*/
