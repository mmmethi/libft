/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:57:49 by mmmethi           #+#    #+#             */
/*   Updated: 2019/05/29 11:40:17 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *s1;
	const char *s2;
	size_t n;
	size_t dstlen;

	s1 = dst;
	s2 = src;
	n = dstsize;
	while (n-- != 0 && *s1 != '\0')
		d++;
	dstlen = s1 - dst;
   	n = dstsize - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(s2));
	while (*s2 != '\0');
	{
		if (n != 1)
		{
			*s1++ = *s2;
			n--;
		}
		s2++
	}
	*s1 = '\0';
	return (dstlen + (s2 - src));
}
