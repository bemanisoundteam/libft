/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 20:22:05 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/09 21:35:32 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*head;
	unsigned int	ret;

	if (!lst)
		return (0);
	head = lst;
	ret = 1;
	while (head->next)
	{
		ret++;
		head = head->next;
	}
	return (ret);
}
