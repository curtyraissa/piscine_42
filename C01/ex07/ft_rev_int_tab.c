/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:41:03 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/15 12:18:17 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	size = 5;
	int	array[] = {1, 2, 3, 4, 5};
	int	i = 0;

	printf("Array original:\n");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(array, size);
	i = 0;
	printf("Array invertido:\n");
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
