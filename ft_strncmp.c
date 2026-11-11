/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:17:44 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 13:57:37 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*left;
	const unsigned char	*right;

	left = (const unsigned char *) s1;
	right = (const unsigned char *) s2;
	while (*left != '\0' && n-- > 0)
	{
		if (*right == '\0')
			return (1);
		if (*left != *right)
			return (*left - *right);
		left++;
		right++;
	}
	if (n == 0 || *right == '\0')
		return (0);
	return (-1);
}
