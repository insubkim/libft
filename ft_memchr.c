#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
        if (((unsigned char*)s)[i++] == (unsigned char)c)
            return ((void*)&(((unsigned char*)s)[--i]));
    return (0);
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int s[10] = {1,2,3,4,5,6,7,8,9};

    if (ft_memchr(s, -1, 40) == memchr(s, -1, 40))
        printf("yes\n");
    else
        printf("no\n");

}