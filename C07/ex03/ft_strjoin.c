/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:24:27 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/09/19 14:42:51 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calculate_total_size(int size, char **strs, char *sep)
{
	int	total_length;
	int	string_index;
	int	sep_length;
	int	i;

	total_length = 0;
	string_index = 0;
	while (string_index < size)
	{
		i = 0;
		while (strs[string_index][i])
			i++;
		total_length += i;
		string_index++;
	}
	sep_length = 0;
	while (sep[sep_length])
		sep_length++;
	total_length += sep_length * (size - 1);
	return (total_length);
}

int	concat_strings(char **dest, char *src, int current_index)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(*dest)[current_index] = src[i];
		i++;
		current_index++;
	}
	return (current_index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		string_index;
	int		current_index;

	if (size == 0)
		return (malloc(1));
	result = malloc((calculate_total_size(size, strs, sep) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	string_index = 0;
	current_index = 0;
	while (string_index < size)
	{
		current_index = concat_strings(&result,
				strs[string_index], current_index);
		if (string_index < (size - 1))
			current_index = concat_strings(&result, sep, current_index);
		string_index++;
	}
	result[current_index] = '\0';
	return (result);
}

/*#include <stdio.h>
int main(void)
{
    char *strs[] = {"Hello", "world"};
    char *sep = " ";
    char *result;

    result = ft_strjoin(2, strs, sep);
    if (result)
    {
        printf("%s\n", result);
    }
    else
        printf("Error");
    return 0;
}*/
