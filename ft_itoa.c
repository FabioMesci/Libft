/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 09:10:52 by fmesci            #+#    #+#             */
/*   Updated: 2026/10/01 10:59:07 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digits(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	long	nb;

	nb = n;
	len = count_digits(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		s[0] = '-';
	}
	if (nb == 0)
		s[0] = '0';
	while (nb != 0)
	{
		len--;
		s[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

/*
int   main(void)
{
      char    *s;

      s = ft_itoa(0);
      printf("%s\n", s);
      free(s);
      s = ft_itoa(123);
      printf("%s\n", s);
      free(s);
      s = ft_itoa(-45);
      printf("%s\n", s);
      free(s);
      s = ft_itoa(2147483647);
      printf("%s\n", s);
      free(s);
      s = ft_itoa(-2147483647 - 1);
      printf("%s\n", s);
      free(s);
      return (0);
}*/
