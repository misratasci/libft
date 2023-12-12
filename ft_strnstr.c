/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:38:10 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/12 17:45:55 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// static int	strs_same(const char *s1, const char *s2, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] && s2[i])
// 	{
// 		if (s1[i] != s2[i])
// 			return (0);
// 		i += 1;
// 	}
// 	if (i < len)
// 		return (0);
// 	return (1);
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;

// 	if (!needle)
// 		return ((char *)haystack);
// 	i = 0;
// 	while (i < len)
// 	{
// 		if (*haystack == 0)
// 			break ;
// 		if (strs_same(haystack, needle, len - i))
// 			return ((char *)haystack);
// 		i += 1;
// 		haystack += 1;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
    size_t	j;
    size_t	l;

    i = 0;
    j = 0;
    if (needle[i] == 0)
        return ((char *)haystack);
    if (len == 0)
        return (NULL);
    while (haystack[i] && i < len)
    {
        l = i;
        j = 0;
        while (haystack[l] == needle[j] && l < len)
        {
            l++;
            j++;
            if (needle[j] == 0)
                return ((char *)haystack + i);
        }
        i++;
    }
	return (NULL);
}
