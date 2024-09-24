/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:40:45 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/16 15:51:50 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			c = 1;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			c = 1;
		else if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			c = 1;
		else
			c = 0;
		if ('A' <= str[i] && str[i] <= 'Z' && c == 1)
			str[i] = str[i] + 32;
		if ('a' <= str[i] && str[i] <= 'z' && c == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	str1[] = "ola, tudo bem? 42palavras";
	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}*/
