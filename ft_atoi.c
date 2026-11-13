/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:07:22 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 11:29:53 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ret;
	int	negative;

	ret = 0;
	negative = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		negative = *nptr++ == '-';
	while (ft_isdigit(*nptr))
	{
		ret *= 10;
		ret -= *nptr++ - '0';
	}
	if (!negative)
		ret *= -1;
	return (ret);
}
