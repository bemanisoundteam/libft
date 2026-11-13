/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:51:53 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 11:51:53 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strnlen(const char *str, size_t size)
{
	size_t	ret;

	ret = 0;
	while (size - ret != 0 && str[ret])
		ret++;
	return (ret);
}
