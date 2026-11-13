/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:58:24 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/13 11:58:24 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(char const *s, char const *accept)
{
	size_t	count;

	count = 0;
	while (s[count] && ft_strchr(accept, s[count]))
		count++;
	return (count);
}
