/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:47:34 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 20:45:38 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == '\0')
		return ((char *) big);
	little_len = ft_strlen(little);
	while (len-- >= little_len && *big)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *) big);
		big++;
	}
	return (NULL);
}
