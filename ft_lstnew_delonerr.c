/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_delonerr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 22:07:59 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/18 22:10:09 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_delonerr(void *content, void (*del)(void *))
{
	t_list	*ret;

	ret = ft_lstnew(content);
	if (!ret)
		del(content);
	return (ret);
}
