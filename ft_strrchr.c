/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:19:17 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/14 19:44:10 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlength(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i += 1;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = strlength(s);
	s += slen;
	while (slen >= 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		slen -= 1;
		s -= 1;
	}
	return (NULL);
}
/*
your strrchr does not work with unicode
[fail]: your strrchr does not work with empty string
[crash]: your strrchr crash because it read too many bytes or attempt to write on s !
*/