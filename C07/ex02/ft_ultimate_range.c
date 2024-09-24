/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:26:33 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/19 12:27:28 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	size = ft_ultimate_range(&range, 0, 9);
	while (i < size)
	{	
		printf("%d", i);
		i++;
	}
	return (0);
}*/
