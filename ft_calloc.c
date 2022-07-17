#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *p;

    p = (void *)malloc(sizeof(nmemb) * size);
    if (!p)
        return (0);
    return (p);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct a1
{
    int a;
    char d;
    int c;
}b;
int main()
{
    printf("structure size = %ld\n", sizeof(b));
    printf("ft_calloc size = %ld\n", sizeof(ft_calloc(sizeof(b), 2)));
    
    printf("calloc size = %ld\n", sizeof(calloc(sizeof(b), 2)));
    b * pp = ft_calloc(sizeof(b), 2);
    pp[0].a = 10;
    pp[1].a = 100;

    pp = calloc(sizeof(b), 2);
    pp[0].a = 11;
    pp[1].a = 111;

    
    
}