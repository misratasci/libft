/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:49:35 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/04 17:08:56 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	size_t	i;

	d = dst;
	i = 0;
	while (i < n)
	{
		d[i] = ((char *)src)[i];
		i += 1;
	}
	return (dst);
}
