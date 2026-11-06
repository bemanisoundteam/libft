/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:28:10 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/06 21:01:57 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slice_len;
	char	*ret;

	slice_len = ft_strlen(s + start);
	if (slice_len > len)
		slice_len = len;
	ret = malloc(slice_len + 1);
	if (ret)
		ft_memcpy(ret, s + start, slice_len + 1);
	return (ret);
}
