/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:25:45 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/14 13:22:38 by mitasci          ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (len > strlength(s))
		len = strlength(s);
	sub = (char *)malloc(len + 1);
	i = 0;
	while (i < len && start < strlength(s))
	{
		sub[i] = s[start + i];
		i += 1;
	}
	sub[i] = 0;
	return (sub);
}
