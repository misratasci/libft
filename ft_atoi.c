/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:38:10 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/07 11:52:42 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			break ;
		res *= 10;
		res += str[i] - '0';
		i += 1;
	}
	return (res);
}
