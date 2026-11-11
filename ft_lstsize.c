/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 20:22:05 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 15:45:20 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	ret;

	if (!lst)
		return (0);
	ret = 1;
	while (lst->next)
	{
		ret++;
		lst = lst->next;
	}
	return (ret);
}
