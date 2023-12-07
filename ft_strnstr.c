/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:38:10 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/07 11:37:09 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	strs_same(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i += 1;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		if (*haystack == 0)
			break ;
		if (strs_same(haystack, needle))
			return ((char *)needle);
		i += 1;
		haystack += 1;
	}
	return (NULL);
}
