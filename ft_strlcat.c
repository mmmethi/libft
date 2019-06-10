/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:57:49 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/07 10:39:44 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int			i;
	size_t		dsize;
	size_t		srclen;
	size_t		dstlen;

	i = 0;
	dsize = ft_strlen(dst);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size < dstlen + 1)
		return (srclen + size);
	if (size > dstlen + 1)
	{
		while (dsize < size - 1)
			*(dst + dsize++) = *(src + i++);
		*(dst + dsize) = '\0';
	}
	return (dstlen + srclen);
}
