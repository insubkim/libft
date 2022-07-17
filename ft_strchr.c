char    *ft_strchr(const char *s, int c)
{
    while (*s)
        if (*s++ == (char)c)
            return ((char *)--s);
    return (0);
}



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char *s = "abcdefg";

    //printf("%s\n", ft_strchr(s, 112));
    
    printf("%s\n", strchr(s, 112));


}