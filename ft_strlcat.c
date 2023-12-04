/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitasci <mitasci@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:35:27 by mitasci           #+#    #+#             */
/*   Updated: 2023/12/04 16:46:38 by mitasci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i += 1;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	while (i < dstsize - dstlen - 1)
	{
		dst[dstlen - 1 + i] = src[i];
		i += 1;
	}
	dst[dstlen - 1 + i] = 0;
	i = 0;
	return (ft_strlen(src) + ft_strlen(dst));
}