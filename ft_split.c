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

char	*strdupl(const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(s));
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i += 1;
	}
	str[i] = 0;
	return (str);
}

static int	in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (i < sizeof(set))
	{
		if (c == set[i])
			return (1);
		i += 1;
	}
	return (0);
}

char	*trim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	str = (char *)malloc(strlength(s1));
	start = 0;
	while (in_set(s1[start], set))
		start += 1;
	end = strlength(s1) - 1;
	while (in_set(s1[end], set))
		end -= 1;
	i = 0;
	while (i < end - start + 1)
	{
		str[i] = s1[start + i];
		i += 1;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	word_count;
	char	*str;

	s = trim(s, &c);
	i = 0;
	j = 0;
	word_count = 0;
	arr = (char **)malloc(strlength(s));
	str = (char *)malloc(strlength(s));
	while (i <= strlength(s))
	{
		if (s[i] != c && s[i] != 0)
		{
			str[j] = s[i];
			j += 1;
		}
		else if (s[i + 1] != c)
		{
			str[j] = 0;
			arr[word_count] = strdupl(str);
			word_count += 1;
			j = 0;
		}
		i += 1;
	}
	arr[word_count] = 0;
	free(str);
	return (arr);
}

int main()
{
	char 	*s = "--sdf-fghfg---sdf---sdgv--";
	int	i = 0;
	char	**a = ft_split(s, '-');
	while (a[i])
	{
		printf("%s, ", a[i]);
		i += 1;
	}
}