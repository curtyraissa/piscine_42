/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:07:26 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/10 16:41:05 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    long num;
    char c;

    num = nb;
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if (num > 9)
    {
        ft_putnbr(num / 10);
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
}

/*int	main(void)
{
	ft_putnbr(-214);
}*/
