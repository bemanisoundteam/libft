/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 20:45:52 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 14:45:58 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (!*lst)
		return ;
	head = *lst;
	while (head->next)
	{
		temp = head->next;
		ft_lstdelone(head, del);
		head = temp;
	}
	ft_lstdelone(head, del);
	*lst = NULL;
}
