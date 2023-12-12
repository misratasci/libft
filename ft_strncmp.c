/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:23:03 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/12 16:26:31 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		c1;
	int		c2;
	size_t	i;

	i = 0;
	while (i < n)
	{
		c1 = s1[i];
		c2 = s2[i];
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
