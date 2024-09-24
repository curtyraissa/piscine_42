/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:09:48 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/08 15:38:21 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "oi";
	char	dest[10];

	ft_strcpy(dest, src);
	if (src[0] == dest[0] && src[1] == dest[1] && src[2] == dest[2])
	{
		write(1, "ok", 2);
	}
	else
	{
		write(1, "E", 1);
	}
	return (0);
}*/
