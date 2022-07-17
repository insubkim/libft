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

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t    dst_len;
        size_t    i;
        size_t    j;

        dst_len = ft_strlen(dst);
        if (size <= dst_len)
                return (size + ft_strlen(src));
        i = dst_len;
        j = 0;
        while (src[j] && 1 + i < size)
                dst[i++] = src[j++];
        dst[i] = 0;
        return (dst_len + ft_strlen(src));
}