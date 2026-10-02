/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:41:22 by fmesci            #+#    #+#             */
/*   Updated: 2026/10/01 13:38:03 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void  suma_indice(unsigned int i, char *c)
{
      *c = *c + i;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
int   main(void)
{
      char    s[] = "abc";
      char    vacia[] = "";

      printf("antes:   %s\n", s);
      ft_striteri(s, suma_indice);
      printf("despues: %s\n", s);
      ft_striteri(vacia, suma_indice);
      printf("vacia:   [%s]\n", vacia);
      return (0);
}*/
