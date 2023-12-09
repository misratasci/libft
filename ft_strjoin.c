/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:09:25 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/09 18:09:25 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(s1) + sizeof(s2));
	i = 0;
	while (i < sizeof(s1) - 1)
	{
		str[i] = s1[i];
		i += 1;
	}
	i = 0;
	while (i < sizeof(s2))
	{
		str[sizeof(s1) - 1 + i] = s2[i];
		i += 1;
	}
	return (str);
}
