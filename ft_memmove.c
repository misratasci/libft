/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:21 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/11 16:14:36 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*temp;
	size_t	i;

	d = dst;
	temp = NULL;
	i = 0;
	while (i < len)
	{
		temp[i] = ((char *)src)[i];
		i += 1;
	}
	i = 0;
	while (i < len)
	{
		d[i] = temp[i];
		i += 1;
	}
	return (dst);
}
