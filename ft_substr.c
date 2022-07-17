#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    int     str_len;
    int     i;

    if (!s)
        return (0);
    str_len = ft_strlen(s);
    if (len == 0 || start > str_len)
        return (0);
    s = s + start;
    i = 0;
    while (s[i] && len > 0)
    {
        i++;
        len--;
    }
    sub = (char *)malloc(sizeof(char) * (i + 1));
    if (!sub)
        return (0);
    len =  len + i;
    i = -1;
    while (s[++i] && len-- > 0)
        sub[i] = s[i];
    sub[i] = 0;
    return (sub);
}

int main()
{
    char s[8] ="abcdefg";
    char *p =ft_substr(s, 7, 1);
    char *pp =ft_substr(s, 8, 1);
    free(pp);
    free(p);
}