/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:37:33 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/09 15:43:32 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	x;

	ret = malloc(ft_strlen(s) + 1);
	if (!ret)
		return (ret);
	x = 0;
	while (s[x])
	{
		ret[x] = f(x, s[x]);
		x++;
	}
	ret[x] = '\0';
	return (ret);
}
