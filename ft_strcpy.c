/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 22:33:29 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/21 21:27:15 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;
	size_t size;

	i = 0;
	size = ft_strlen(src) + 1;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
