#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    i--;
    while (i >= 0)
        if (s[i--] == (char)c)
            return ((char*)&(s[++i]));
    return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char *s = "abcdefag";

  
    if (ft_strrchr(s, 200) == strrchr(s, 200))
        printf("yes\n");
    else
        printf("no\n");

}