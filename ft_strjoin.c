/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:50:05 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/18 20:30:01 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_new;
	size_t	i;
	size_t	k;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str_new = ft_strnew(s1len + s2len);
	if (!str_new)
		return (NULL);
	i = -1;
	k = -1;
	while (++i < s1len)
		*(str_new + i) = *(s1 + i);
	while (++k < s2len)
		*(str_new + i) = *(s2 + i);
	return (str_new);
}
