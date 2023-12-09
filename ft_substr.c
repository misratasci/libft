/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:25:45 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/09 17:25:45 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char *)malloc(len);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i += 1;
	}
	return (sub);
}
