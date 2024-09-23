/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:49:44 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/09 16:02:53 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	idest;

	i = 0;
	idest = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[idest] = src[i];
		i++;
		idest++;
	}
	dest[idest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[10] = "abcd";
	char	dest[10] = "1234";

	printf("%s\n", ft_strncat(dest, src, 2));
	return (0);
}*/
