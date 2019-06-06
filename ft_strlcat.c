/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:57:49 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/06 16:46:44 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t srclen;
    size_t dstlen;

    srclen = size;
    dstlen = ft_strlen(dst) + ft_strlen(src);
    while (*dst != 0 && size > 0)
    {
        dst++;
        size--;
    }
    if (size == 0)
        return (ft_strlen(src) + srclen);
    while (*src != 0 && size > 1)
    {
        *dst++ = *src++;
        size--;
    }
    *dst = 0;
    return (dstlen);
    return (0);
}
