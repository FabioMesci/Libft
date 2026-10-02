/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:06:04 by fmesci            #+#    #+#             */
/*   Updated: 2026/09/28 17:54:07 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	j;
	size_t	dst_len;

	src_len = ft_strlen(src);
	j = 0;
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while ((src[j] != '\0') && (i < (dstsize - 1)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
