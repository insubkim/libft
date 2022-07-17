/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:07:32 by inskim            #+#    #+#             */
/*   Updated: 2022/04/27 17:16:59 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

int	cnt_word(char *str, char *charset)
{
	int	i;
	int	flag;

	i = 0 ;
	flag = 1;
	str--;
	while (*++str)
	{
		if (is_charset(*str, charset))
			flag = 1;
		else if (flag == 1)
		{
			i++;
			flag = 0;
		}
	}
	return (i);
}

int	alloc(char **arr, char *str, int i, int j)
{
	int	len;
	int	k;

	len = j - i + 1;
	*arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!*arr)
		return (0);
	(*arr)[len] = 0;
	k = 0;
	while (i <= j)
		(*arr)[k++] = str[i++];
	return (1);
}

int	put(char **arr, char *str, char *charset)
{
	int	i;
	int	j;
	int	flag;

	j = -1;
	flag = 1;
	while (str[++j])
	{
		if (is_charset(str[j], charset))
		{
			if (flag == 0)
				if (!alloc(arr++, str, i, j - 1))
					return (0);
			flag = 1;
		}
		else if (flag == 1)
		{
			i = j;
			flag = 0;
		}
	}
	if (flag == 0)
		if (!alloc(arr, str, i, j))
			return (0);
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	char	**arr;

	word = cnt_word(str, charset);
	arr = (char **)malloc(sizeof(char *) * (word + 1));
	if (!arr)
		return (0);
	arr[word] = 0;
	if (!put(arr, str, charset))
		return (0);
	return (arr);
}
