/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:13:13 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/11 11:13:13 by mitasci          ###   ########.fr       */
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

char	*join(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(strlength(s1) + strlength(s2));
	i = 0;
	while (i < strlength(s1))
	{
		str[i] = s1[i];
		i += 1;
	}
	i = 0;
	while (i < strlength(s2))
	{
		str[strlength(s1) + i] = s2[i];
		i += 1;
	}
	str[strlength(s1) + i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;

	s = (char *)malloc(10);
	i = 0;
	if (n < 0)
	{
		s[i++] = '-';
		s[i] = 0;
		return (join(s, ft_itoa(-n)));
	}
	else if (n >= 10)
		return (join(ft_itoa(n / 10), ft_itoa(n % 10)));
	else
	{
		s[i++] = n + '0';
		s[i] = 0;
		return (s);
	}
}
