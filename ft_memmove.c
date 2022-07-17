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
void*   ft_memmove(void *s1, const void *s2, size_t n)
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