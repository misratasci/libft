/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:10:59 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/11 15:30:15 by mitasci          ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	slen;

	i = 0;
	slen = strlength(s);
	while (i <= slen)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		i += 1;
		s += 1;
	}
	return (NULL);
}
