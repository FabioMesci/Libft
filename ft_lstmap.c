/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmesci <fmesci@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:42:49 by fmesci            #+#    #+#             */
/*   Updated: 2026/10/02 15:28:30 by fmesci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_new(t_list *head, void (*del)(void *))
{
	t_list	*next;

	while (head != NULL)
	{
		next = head->next;
		del(head->content);
		free(head);
		head = next;
	}
}

static void	append(t_list **head, t_list **tail, t_list *node)
{
	if (*head == NULL)
	{
		*head = node;
		*tail = node;
	}
	else
	{
		(*tail)->next = node;
		*tail = node;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	*node;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	tail = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = malloc(sizeof(t_list));
		if (node == NULL)
		{
			del(content);
			clear_new(head, del);
			return (NULL);
		}
		node->content = content;
		node->next = NULL;
		append(&head, &tail, node);
		lst = lst->next;
	}
	return (head);
}
