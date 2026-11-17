/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimtoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 20:08:04 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/17 20:08:04 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

static size_t	calc_str_size(uintmax_t nbr, size_t base_len)
{
	size_t	ret;

	ret = 1;
	while (nbr >= base_len)
	{
		ret++;
		nbr /= base_len;
	}
	return (ret + 1);
}

char	*ft_uimtoa_base(uintmax_t nbr, const char *base, const char *prefix)
{
	char	*str;
	size_t	size;
	size_t	base_len;
	size_t	prefix_len;

	base_len = ft_strlen(base);
	prefix_len = ft_strlen(prefix);
	size = calc_str_size(nbr, base_len) + prefix_len;
	str = malloc(size);
	if (!str)
		return (str);
	ft_memcpy(str, prefix, prefix_len);
	str[--size] = '\0';
	while (nbr >= base_len)
	{
		str[--size] = base[nbr % base_len];
		nbr /= base_len;
	}
	str[--size] = base[nbr];
	return (str);
}
