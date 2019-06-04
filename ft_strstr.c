/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:17:21 by event             #+#    #+#             */
/*   Updated: 2019/06/04 16:19:41 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*str1;
	const char	*str2;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;
		while (*str2 != '\0' && *srt1 == *srt2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return ((char*)haystack);
		srt1++;
	}
	return (NULL);
}
