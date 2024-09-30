#include <stdlib.h>

int	is_sep(char *seps, char c)
{
	int	i;

	i = 0;
	while (seps[i])
	{
		if (seps[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *seps)
{
	int	f;
	int	w;

	w = 0;
	while (*str)
	{
		f = 0;
		while (*str && is_sep(seps, *str))
			str++;
		while (*str && !is_sep(seps, *str))
		{
			if (f == 0)
				w++;
			f = 1;
			str++;
		}
	}
	return (w);
}

char	*skip_seps(char *str, char *seps)
{
	while (*str && is_sep(seps, *str))
		str++;
	return (str);
}

char	*get_word(char *str, char *charset)
{
	int		s;
	int		i;
	char	*word;

	s = 0;
	while (str[s] && !is_sep(charset, str[s]))
		s++;
	word = malloc(sizeof(char) * (s + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < s)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		size;
	int		i;

	size = (count_words(str, charset));
	res = malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str = skip_seps(str, charset);
		res[i] = get_word(str, charset);
		while (*str && !is_sep(charset, *str))
			str++;
		i++;
	}
	res[i] = 0;
	return (res);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	(void) argc;
	char **res;
	int i = 0;
	int words = count_words(argv[1], argv[2]);
	printf("words: %d\n", words);
	res = ft_split(argv[1], argv[2]);
	while (res[i])
	{
		printf("%s-", res[i]);
		i++;
	}
	return (0);
}*/
