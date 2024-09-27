/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:17:32 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/25 13:31:21 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_print_params(int argc, char **argv)
{
	int		j;
	int		i;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		argv[i][j] = '\0';
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*max;
	int		s;

	s = 1;
	while (s < argc - 1)
	{
		if (ft_strcmp(argv[s], argv[s + 1]) > 0)
		{
			max = argv[s];
			argv[s] = argv[s + 1];
			argv[s + 1] = max;
			s = 1;
		}
		else
			s++;
	}
	ft_print_params(argc, argv);
	return (0);
}
