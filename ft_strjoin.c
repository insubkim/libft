#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     len;
    char    *p;
    int     i;

    len = ft_strlen(s1) + ft_strlen(s2);
    p = (char *)malloc(sizeof(char) * (len + 1));
    if (!p)
        return (0);
    i = 0;
    if (!s1 || !s2)
        return (0);
    while (*s1)
        p[i++] = *s1++;
    while (*s2)
        p[i++] = *s2++;
    p[i] = 0;
    return (p);     
}


#include <stdio.h>
int main()
{
    char d[10] ="abc";
    char d2[10] ="def";
    char *d3 = ft_strjoin(d,d2);
    printf("%s\n", d3);
}