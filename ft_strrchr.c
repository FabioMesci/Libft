/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:40:05 by fmesci            #+#    #+#             */
/*   Updated: 2026/09/29 11:09:22 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	int		counter;

	counter = -1;
	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			counter = i;
		}
		i++;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	if (counter != -1)
		return ((char *)&s[counter]);
	return (NULL);
}
