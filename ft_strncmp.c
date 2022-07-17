/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:37:01 by inskim            #+#    #+#             */
/*   Updated: 2022/07/07 23:37:01 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t  i;

        if (n == 0)
                return (0);
        i = 0;
        while (*s1 == *s2++ && i++ < n)
            if (*s1++ == 0 || i == n)
                return (0);
        return ((unsigned char)*s1 - (unsigned char)*s2);
}