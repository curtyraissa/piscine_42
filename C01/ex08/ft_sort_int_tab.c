/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:44:28 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/15 14:08:25 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	pass;

	pass = 0;
	while (pass < size -1)
	{
		i = 0;
		while (i < size - 1 - pass)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		pass++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	array[] = {64, 34, 25, 12, 22};
	int	size = 5;
	int	i;

	i = 0;
	printf("Array original:\n");
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(array, size);
	printf("Array ordenado:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
