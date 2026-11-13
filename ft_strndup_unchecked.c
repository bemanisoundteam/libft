/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_unchecked.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:13:47 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 15:13:57 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strndup_unchecked(const char *s, size_t size)
{
	char	*ret;

	ret = malloc(size + 1);
	if (ret)
	{
		ft_memcpy(ret, s, size);
		ret[size] = '\0';
	}
	return (ret);
}
