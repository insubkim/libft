/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:37:01 by inskim            #+#    #+#             */
/*   Updated: 2022/07/14 17:37:00 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

size_t  ft_strlen(const char *s);
void*   ft_memset(void *b, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void*   ft_memcpy(void *restrict s1, const void *restrict s2, size_t n);
void*   ft_memmove(void *s1, const void *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_atoi(const char *nptr);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char*   ft_strdup(const char *s);