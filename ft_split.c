/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:21:34 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/09 21:21:34 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	strlength(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i += 1;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	word_count;
	char	*str;

	i = 0;
	j = 0;
	word_count = 0;
	arr = (char **)malloc(strlength(s));
	while(i < strlength(s))
	{
		str = (char *)malloc(strlength(s));
		if (s[i] != c)
		{
			str[j] = s[i];
			j += 1;
		}
		else
		{
			str[j] = 0;
			arr[word_count] = str;
			free(str);
			j = 0;
		}
		i += 1;
	}
	arr[i] = 0;
	return (arr);
}

int main()
{
	char	**a = (char **)malloc(50);
	a = ft_split("kdfakdfakdfaakmfda", 'a');
	int	i = 0;
	while (a[i])
	{
		printf("%s, ", a[i]);
		i += 1;
	}
}