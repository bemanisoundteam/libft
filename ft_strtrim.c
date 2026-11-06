/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:55:26 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/06 21:03:15 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_strspn(char const *s, char const *accept)
{
	size_t	count;

	count = 0;
	while (s[count] && ft_strchr(accept, s[count]))
		count++;
	return (count);
}

static size_t	locate_end(char const *s, char const *set)
{
	size_t	pos;
	size_t	last;

	pos = 0;
	last = 0;
	while (s[pos])
	{
		if (!ft_strchr(set, s[pos]))
			last = pos;
		pos++;
	}
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	span;
	char	*ret;

	start = ft_strspn(s1, set);
	span = locate_end(s1 + start, set);
	ret = malloc(span + 1);
	if (!ret)
		return (ret);
	ft_strlcpy(ret, s1 + start, span + 1);
	return (ret);
}
