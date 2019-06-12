/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:30:22 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/12 15:44:35 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(unsigned int i, char *s)
{
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int main()
{	
	char duma[] = "Mxolisi Duma\n";
	int i;

	i = 0;
	ft_striteri(duma, ft_putstr);
	return (0);
}
