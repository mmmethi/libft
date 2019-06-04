/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:30:57 by event             #+#    #+#             */
/*   Updated: 2019/06/04 16:21:35 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t hay_len)
{
	size_t	nee_len;
	int		i;

	if (*needle == '\0')
		return ((char*)haystack);
	nee_len = ft_strlen(needle);
	i = 1;
	while (nee_len <= hay_len && *haystack != '\0' &&
			(i = ft_strncmp(haystack, needle, nee_len)))
	{
		hay_len--;
		haystack++;
	}
	if (i != 0)
		return (NULL);
	else
		return ((char*)haystack);
}
