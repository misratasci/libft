/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:19:17 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/22 14:00:07 by mitasci          ###   ########.fr       */
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
	char	*str;
	size_t	slen;

	c = c % 256;
	slen = strlength(s);
	str = (char *)s;
	str += slen;
	while (slen >= 0 && slen <= strlength(s))
	{
		if (*str == c)
			return (str);
		slen -= 1;
		str -= 1;
	}
	return (NULL);
}
