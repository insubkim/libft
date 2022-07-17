/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:37:01 by inskim            #+#    #+#             */
/*   Updated: 2022/07/11 20:17:37 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void*   ft_memcpy(void *s1, const void *s2, size_t n)
{
    int i;

    if (s1 > s2)
    {
        while (n > 0)
        {
            n--;
            ((char *)s1)[n] = ((char *)s2)[n];
        }
    }
    else if (s1 < s2)
    {
        i = 0;
        while (i < n)
        {
            ((char *)s1)[i] = ((char *)s2)[i];
            i++;
        }
    }
    return (s1);
}

#include <string.h>
#include <stdio.h>
int main()
{
    char s1[100];
    char cp[100];

    int i = 0;
    while (i <100)
    {
        s1[i] =i;
        i++;
    }
    i = 0;
    while (i <100)
    {
        cp[i] =s1[i];
        i++;
    }
    i = 0;

    char *s2 = s1 + 1;
    memmove(s2, s1, 100);
    i = 0;
    int a = 1;
    while (i <100)
    {
        if(a == 1 && s2[i] != cp[i])
        {
            printf("no!!    %d == %d===%d\n",i,cp[i], s2[i]);
            a = 0;
        }
        i++;
    }

}

