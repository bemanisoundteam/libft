/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:13:35 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/09 21:46:34 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*pending;
	t_list	*ret;

	if (!lst)
		return (lst);
	ret = ft_lstnew(f(lst->content));
	if (!ret)
		return (ret);
	head = ret;
	while (lst->next)
	{
		lst = lst->next;
		pending = ft_lstnew(f(lst->content));
		if (!pending)
		{
			ft_lstclear(&ret, del);
			return (ret);
		}
		head->next = pending;
		head = head->next;
	}
	return (ret);
}
