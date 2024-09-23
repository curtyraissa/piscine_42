/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:12:16 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/09 11:18:33 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	idest;

	idest = 0;
	i = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[i] != '\0')
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
	char	src[7] = " certo";
	char	dest[20] = "tudo";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}*/
