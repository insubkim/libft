#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string.h>
int main()
{
    char *c = (char *)malloc(sizeof(char) * 10);

    c[0] = '7';
    c[1] = '7';
    c[2] = '7';
    c[3] = '7';
    c[4] = '7';
    c[5] = '7';
    c[6] = '7';
    c[7] = '7';
    c[8] = '7';
    c[9] = '7';
    char *d = (char *)malloc(sizeof(char) * 10);
    d[0] = '3';
    d[1] = '3';
    d[2] = '3';
    d[3] = '3';
    d[4] = '3';
    d[5] = '3';
    d[6] = '3';
    d[7] = '3';
    d[8] = '3';
    d[9] = '3';

 //   memset(d, 256, 5);
    char k[10] = "123456789";
    strcpy(k + 1, k);
    printf("%s  ___\n",k - 1);
    const int i = 0;
    int j = 1;
    const int *p = & i;
    p = & j;
}