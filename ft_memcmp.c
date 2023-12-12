/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:49:51 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/12 16:28:39 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		c1;
	int		c2;
	size_t	i;

	i = 0;
	while (i < n)
	{
		c1 = ((char *)s1)[i];
		c2 = ((char *)s2)[i];
		if (c1 < 0)
			c1 *= -1;
		if (c2 < 0)
			c2 *= -1;
		if (c1 != c2)
		{
			if (c1 > c2)
				return (1);
			else
				return (-1);
		}
		i += 1;
	}
	return (0);
}
