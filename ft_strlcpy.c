/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:31:27 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/02 19:11:12 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ret;

	ret = ft_strlen(src);
	if (size == 0)
		return (ret);
	while (size-- - 1 > 0 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}
