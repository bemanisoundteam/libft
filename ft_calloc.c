/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:21:52 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 20:10:18 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ret;

	ret = NULL;
	if (size == 0 || n <= SIZE_MAX / size)
		ret = malloc(n * size);
	if (ret)
		ft_bzero(ret, n * size);
	return (ret);
}
