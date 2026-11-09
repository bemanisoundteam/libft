/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:28:10 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/09 13:37:32 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t size)
{
	size_t	ret;

	ret = 0;
	while (size - ret != 0 && str[ret])
		ret++;
	return (ret);
}

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
	return (ft_strndup(s + start, len));
}
