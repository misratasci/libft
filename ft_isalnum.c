/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:50:29 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/04 17:00:43 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
int	ft_isalnum(int c)
{
	int	isdigit;
	int	isalpha;

	isdigit = (c >= 48 && c <= 57);
	isalpha = (c >= 65 && c <= 122);
	return (isdigit || isalpha);
}
