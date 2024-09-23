/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:44:10 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/10 18:58:06 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}

/*#include <stdio.h>

int main(void)
{
    char dest1[20] = "Hello";
    char src[] = " World";
    char dest2[6] = "Hi";

    printf("Teste 1:\n");
    printf("Antes: '%s'\n", dest1);
    printf("Retorno: %u\n", ft_strlcat(dest1, src, 20));
    printf("Depois: '%s'\n\n", dest1);

    printf("Teste 2:\n");
    printf("Antes: '%s'\n", dest2);
    printf("Retorno: %u\n", ft_strlcat(dest2, src, 6));
    printf("Depois: '%s'\n", dest2);

    return 0;
}*/
