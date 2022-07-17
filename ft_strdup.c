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

char    *ft_strdup(const char *s)
{
        size_t             len;
        char            *cp;
        size_t             i;

        len = ft_strlen(s);
        cp = (char *)malloc(sizeof(char) * (len + 1));
        if (!cp)
                return (0);
        i = 0;
        while (i < len)
                cp[i++] = *s++;
        cp[i] = 0;
        return (cp);

}