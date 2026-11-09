/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:23:49 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/09 18:17:33 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[12];
	char	*head;
	int		was_negative;

	nbr[11] = '\0';
	was_negative = n < 0;
	if (n > 0)
		n *= -1;
	head = nbr + 10;
	while (n < -9)
	{
		*head-- = '0' - (n % 10);
		n /= 10;
	}
	*head = '0' - (n % 10);
	if (was_negative)
		*--head = '-';
	ft_putstr_fd(head, fd);
}
