/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:50:29 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/04 12:12:31 by mitasci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	isdigit;
	int	isalpha;

	isdigit = (c >= 48 && c <= 57);
	isalpha = (c >= 65 && c <= 122);
	return (isdigit || isalpha);
}
