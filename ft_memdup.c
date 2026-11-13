/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:04:50 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 15:16:16 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memdup(const void *src, size_t size)
{
	void	*ret;

	ret = malloc(size);
	if (ret)
		ft_memcpy(ret, src, size);
	return (ret);
}
