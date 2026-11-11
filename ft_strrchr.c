/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:50:42 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 20:56:01 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	char	chr;

	ret = NULL;
	chr = c;
	while (*s)
	{
		if (*s == chr)
			ret = (char *) s;
		s++;
	}
	if (chr == '\0')
		ret = (char *) s;
	return (ret);
}
