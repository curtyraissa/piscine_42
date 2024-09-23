/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:01:09 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/10 11:43:01 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "projeto c03 exercicio 04";
	char to_find1[] = "c03";
	char str2[] = "projeto c03 exercicio 04";
	char to_find2[] = "";

	printf("Caso 1: %s\n", ft_strstr(str1, to_find1));
	printf("Caso 1: %s\n", ft_strstr(str2, to_find2));
	return (0);
}*/
