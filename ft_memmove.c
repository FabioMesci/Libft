/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:02:36 by fmesci            #+#    #+#             */
/*   Updated: 2026/09/28 12:54:59 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s = src;
	d = dst;
	i = 0;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int   main(void)
{
      char    a[] = "abcdef";
      char    b[] = "abcdef";
      char    c[] = "abcdef";
      char    d[] = "abcdef";

      ft_memmove(a + 2, a, 4);
      memmove(b + 2, b, 4);
      printf("dst > src\n");
      printf("mio:  %s\n", a);
      printf("real: %s\n\n", b);

      ft_memmove(c, c + 2, 4);
      memmove(d, d + 2, 4);
      printf("dst < src\n");
      printf("mio:  %s\n", c);
      printf("real: %s\n", d);
      return (0);
}*/
