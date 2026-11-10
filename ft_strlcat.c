/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:33:18 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/10 12:15:49 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t size)
{
	size_t	ret;

	ret = 0;
	while (size - ret != 0 && str[ret])
		ret++;
	return (ret);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;

	ret = ft_strnlen(dst, size);
	return (ret + ft_strlcpy(dst + ret, src, size - ret));
}
