/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:16:28 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/14 12:55:34 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strtrim(char const *s1, char const *set)
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
