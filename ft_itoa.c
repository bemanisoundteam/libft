/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:13:52 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/09 14:27:14 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	calc_str_size(int n)
{
	size_t	ret;

	ret = 1;
	if (n < 0)
		ret++;
	else
		n *= -1;
	while (n < -9)
	{
		ret++;
		n /= 10;
	}
	return (ret + 1);
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	size;

	size = calc_str_size(n);
	ret = malloc(size);
	if (!ret)
		return (ret);
	ret[--size] = '\0';
	if (n < 0)
		ret[0] = '-';
	else
		n *= -1;
	while (n < -9)
	{
		ret[--size] = '0' - (n % 10);
		n /= 10;
	}
	ret[--size] = '0' - (n % 10);
	return (ret);
}
