/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:57:49 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/19 14:01:26 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int			i;
	size_t		dsize;
	size_t		srclen;
	size_t		dstlen;

	i = 0;
	dsize = ft_strlen(dst);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	if (dstsize > dstlen + 1)
	{
		while (dsize < dstsize - 1)
			*(dst + dsize++) = *(src + i++);
		*(dst + dsize) = '\0';
	}
	return (dstlen + srclen);
}
