/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:43:41 by agarcia-          #+#    #+#             */
/*   Updated: 2016/12/19 20:00:39 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *r;
	int i;
	int c;

	c = start;
	i = 0;
	r = (char*)malloc(sizeof(char) * len + 1);
	if (r == NULL)
		return (NULL);
	while (c < (int)start + (int)len)
	{
		r[i] = s[c];
		i++;
		c++;
	}
	r[i] = '\0';
	return (r);
}
