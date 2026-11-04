/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:15:46 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/04 12:34:28 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*left;
	const unsigned char	*right;

	left = s1;
	right = s2;
	while (n-- > 0)
	{
		if (*left != *right)
			return (*left - *right);
		left++;
		right++;
	}
	return (0);
}
