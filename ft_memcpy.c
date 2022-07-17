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


}

#include <string.h>
#include <stdio.h>
int main()
{
    int i = 1;
    char a[100];
    while (i <= 100)
    {
        a[i - 1] = i;
        i++;
    }
    char *b = a + 1;
    void *k = memcpy(b, a, 100);
}