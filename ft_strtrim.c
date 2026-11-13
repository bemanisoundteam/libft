/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:55:26 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 11:59:27 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	calculate_span(char const *s, char const *set)
{
	size_t	pos;
	size_t	last;

	pos = 0;
	last = 0;
	while (s[pos])
	{
		if (!ft_strchr(set, s[pos]))
			last = pos + 1;
		pos++;
	}
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	span;
	char	*ret;

	s1 += ft_strspn(s1, set);
	span = calculate_span(s1, set);
	ret = malloc(span + 1);
	if (!ret)
		return (ret);
	ft_strlcpy(ret, s1, span + 1);
	return (ret);
}
