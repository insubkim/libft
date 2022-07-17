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

size_t  strlcpy(char *dst, const char *src, size_t size)
{
        size_t     src_size;

        src_size = ft_strlen(src);
        if (size == 0)
                return (src_size);
        while (size-- > 1 && *src)
                *dst++ = *src++;
        *dst = 0;
        return (src_size);
}