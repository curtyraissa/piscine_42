/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:32:35 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/07 14:13:34 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char carac);

void	rush(int x, int y)
{
	int	coluna;
	int	linha;

	if (x < 1 || y < 1)
		return ;
	linha = 1;
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			if ((linha == 1 && coluna == 1) || (linha == y && coluna == 1))
				ft_putchar('A');
			else if ((linha == 1 && coluna == x) || (linha == y && coluna == x))
				ft_putchar('C');
			else if ((linha == 1 || linha == y) || (coluna == 1 || coluna == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}
