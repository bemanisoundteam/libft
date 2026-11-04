/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:07:22 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/04 15:03:24 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	long long	ret;
	int			negative;

	ret = 0;
	negative = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		negative = *nptr++ == '-';
	while (ft_isdigit(*nptr))
	{
		ret *= 10;
		ret += *nptr++ - '0';
	}
	if (negative)
		ret *= -1;
	return (ret);
}
