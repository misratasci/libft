/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:21:34 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/14 12:55:42 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*trim(char const *s1, char c)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	str = (char *)malloc(strlength(s1));
	start = 0;
	while (s1[start] == c)
		start += 1;
	end = strlength(s1) - 1;
	while (s1[end] == c)
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

static char	*write_word(const char *s, char *dst, size_t i, char stop_char)
{
	size_t	j;

	j = 0;
	while (s[i] != stop_char && s[i] != 0)
	{
		dst[j] = s[i];
		i += 1;
		j += 1;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	word_count;
	char	*str;

	s = trim(s, c);
	i = 0;
	word_count = 0;
	arr = (char **)malloc(strlength(s));
	str = (char *)malloc(strlength(s));
	while (i <= strlength(s))
	{
		if (i == 0 || (s[i - 1] == c && s[i] != c))
			str = write_word(s, str, i, c);
		if ((s[i] == c && s[i + 1] != c) || s[i] == 0)
			arr[word_count++] = strdupl(str);
		i += 1;
	}
	arr[word_count] = 0;
	free(str);
	return (arr);
}
