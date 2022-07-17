/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:07:32 by inskim            #+#    #+#             */
/*   Updated: 2022/07/17 21:37:54 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	static cnt_word(char const *s, char c)
{
	int	i;
	int	flag;

	i = 0 ;
	flag = 1;
	s--;
	while (*++s)
	{
		if (*s == c)
			flag = 1;
		else if (flag == 1)
		{
			i++;
			flag = 0;
		}
	}
	return (i);
}

int	static alloc(char **arr, char const *s, int i, int j)
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
		(*arr)[k++] = s[i++];
	return (1);
}

int	static put(char **arr, char const *s, char c)
{
	int	i;
	int	j;
	int	flag;

	j = -1;
	flag = 1;
	while (s[++j])
	{
		if (s[j] == c)
		{
			if (flag == 0)
				if (!alloc(arr++, s, i, j - 1))
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
		if (!alloc(arr, s, i, j))
			return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**arr;

	word = cnt_word(s, c);
	arr = (char **)malloc(sizeof(char *) * (word + 1));
	if (!arr)
		return (0);
	arr[word] = 0;
	if (!put(arr, s, c))
	{
		while (*arr)
			free(*arr++);
		free(arr);
		return (0);
	}
	return (arr);
}

#include <stdio.h>
int main()
{
	char *s ="11hello world11111 im in111sub1111kim1nice1to1mee1you";
	char **arr = ft_split(s,'1');
	int i = 0;
	while (arr[i])
		printf("%s",arr[i++]);
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);

}
