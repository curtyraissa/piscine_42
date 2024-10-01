/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

#include <stdlib.h>

char *ft_strdup(char *src) 
{
    char *str;
    int i = 0;

    while (src[i]) 
    {
        i++;
    }

    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str) 
    {
        return (NULL);
    }

    i = 0;
    while (src[i]) 
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';

    return (str);
}