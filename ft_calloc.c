/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:21:52 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/06 13:08:18 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
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
	else
		errno = ENOMEM;
	return (ret);
}
