/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:28:10 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 11:53:48 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strndup(char const *s, size_t len)
{
	size_t	slice_len;
	char	*ret;

	slice_len = ft_strnlen(s, len);
	ret = malloc(slice_len + 1);
	if (ret)
	{
		ft_memcpy(ret, s, slice_len);
		ret[slice_len] = '\0';
	}
	return (ret);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	return (ft_strndup(s + start, len));
}
