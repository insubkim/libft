#include "libft.h"

int static ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == 0)
            return (0);
        s1++;
        s2++;
    }
    return (1);
}


char *ft_strtrim(char const *s1, char const *set)
{
    int i; 
    int set_len;

    i = 0;
    set_len = ft_strlen(set);
    while (s1[i])
    {
        if (ft_strcmp(s1, set) == 0)
        {
                       
        }
        i++;
    }
}