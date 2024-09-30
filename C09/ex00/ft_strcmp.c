int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	count;

	res = 0;
	count = 0;
	while (s1[count])
	{
		if (s1[count] != s2[count])
		{
			break ;
		}
		count++;
	}
	res = s1[count] - s2[count];
	return (res);
}
