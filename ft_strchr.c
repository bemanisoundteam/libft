/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:34:22 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 20:57:11 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = c;
	while (*s || chr == '\0')
	{
		if (*s == chr)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
