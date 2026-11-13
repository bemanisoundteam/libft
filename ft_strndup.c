/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:04:01 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 12:04:01 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(char const *s, size_t len)
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
