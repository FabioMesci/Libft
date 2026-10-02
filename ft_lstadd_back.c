/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:50:35 by fmesci            #+#    #+#             */
/*   Updated: 2026/10/02 12:32:44 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cursor;

	if (lst == NULL || new == NULL)
		return ;
	cursor = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = new;
}
