/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:40:58 by fmesci            #+#    #+#             */
/*   Updated: 2026/10/01 14:00:25 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int   main(void)
{
      ft_putchar_fd('H', 1);
      ft_putchar_fd('o', 1);
      ft_putchar_fd('l', 1);
      ft_putchar_fd('a', 1);
      ft_putchar_fd('\n', 1);
      return (0);
}*/
