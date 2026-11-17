/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:13:52 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/17 20:36:55 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DEC "0123456789"

#include "libft.h"

char	*ft_itoa(int n)
{
	if (n < 0)
		return (ft_uimtoa_base(-((unsigned int) n), DEC, "-"));
	return (ft_uimtoa_base(n, DEC, ""));
}
