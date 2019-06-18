/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:57:59 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/18 20:33:50 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	unsigned int	i;

	len = str_len(n);
	i = n;
	if (n < 0)
	{
		i = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = i % 10 + '0';
	while (i /= 10)
		str[len] = i % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
