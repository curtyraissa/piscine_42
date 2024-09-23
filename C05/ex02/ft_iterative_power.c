/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:50:26 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/11 10:28:48 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(16, -1));
	printf("%d\n", ft_iterative_power(3, 3));
	return (0);
}*/
