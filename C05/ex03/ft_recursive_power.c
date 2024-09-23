/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:49:04 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/11 11:27:47 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb *= ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(16, -1));
	printf("%d\n", ft_recursive_power(16, 0));
	printf("%d\n", ft_recursive_power(3, 3));
	return (0);
}*/
