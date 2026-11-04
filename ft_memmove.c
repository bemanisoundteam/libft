/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:16:42 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/02 18:17:29 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static void	*memmove_reverse(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*source;

	dst = dest + n;
	source = src + n;
	while (n-- > 0)
		*--dst = *--source;
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*source;

	if (src < dest)
		return (memmove_reverse(dest, src, n));
	dst = dest;
	source = src;
	while (n-- > 0)
		*dst++ = *source++;
	return (dest);
}
