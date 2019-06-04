/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:29:48 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/04 15:46:11 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dstp;
	char	*srcp;
	size_t	i;

	dstp = dst;
	srcp = (char *)src;
	i = -1;
	while (++i < n)
		*(dstp + i) = *(srcp + i);
	return (dst);
}
