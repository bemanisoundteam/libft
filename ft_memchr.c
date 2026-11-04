/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:34:55 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/04 12:36:35 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*buf;
	unsigned char		chr;

	buf = s;
	chr = c;
	while (n-- > 0)
	{
		if (*buf == chr)
			return ((void *) buf);
		buf++;
	}
	return (NULL);
}
