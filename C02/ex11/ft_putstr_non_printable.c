/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:31:15 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/17 08:56:43 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, &("0123456789abcdef"[str[i] / 16]), 1);
			write(1, &("0123456789abcdef"[str[i] % 16]), 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
    char str[] = "Ola \nesta bem?";
    ft_putstr_non_printable(str);
    return 0;
}*/
