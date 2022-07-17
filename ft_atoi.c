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

int ft_atoi(const char *nptr)
{
    int i;
    unsigned int num;

    i = 0;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    num = 0;
    while (48 <= nptr[i] && nptr[i] <= 57)
        num = 10 * num + nptr[i++] - 48;
    if (nptr[0] == '-')
        return (-num);
    return (num);
}

