/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccabanne <ccabanne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:27:22 by ccabanne          #+#    #+#             */
/*   Updated: 2026/11/11 14:05:51 by ccabanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static unsigned int	calc_word_len(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static unsigned int	count_words(const char *s, char c)
{
	unsigned int	wc;

	wc = 0;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
		}
		else
		{
			wc++;
			s += calc_word_len(s, c);
		}
	}
	return (wc);
}

static void	ft_split_destroy(char **arr, unsigned int len)
{
	while (len-- > 0)
		free(arr[len]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			word_len;
	unsigned int	word_count;
	unsigned int	x;

	word_count = count_words(s, c);
	ret = ft_calloc(word_count + 1, sizeof(*ret));
	if (!ret)
		return (ret);
	x = 0;
	while (x < word_count)
	{
		while (*s == c)
			s++;
		word_len = calc_word_len(s, c);
		ret[x] = ft_substr(s, 0, word_len);
		if (!ret[x])
		{
			ft_split_destroy(ret, x);
			return (NULL);
		}
		s += word_len;
		x++;
	}
	return (ret);
}
