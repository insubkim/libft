#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  len;
    char    *arr;
    unsigned int     i;

    if (!s)
        return (0);
    len = ft_strlen(s);
    arr = (char *)malloc(sizeof(char) * (len + 1));
    arr[len] = 0;
    i = 0;
    while (i < len)
    {
        arr[i] = f(i, s[i]);
        i++;
    }
    return (arr);
}