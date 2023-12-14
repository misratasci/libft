/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:39:45 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/14 19:30:53 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = c % 256;
	while (i < n)
	{
		if (*((char *)s) == c)
		{
			return ((void *)s);
		}
		i += 1;
		s += 1;
	}
	return (NULL);
}
