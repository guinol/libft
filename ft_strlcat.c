/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 05:25:43 by agarcia-          #+#    #+#             */
/*   Updated: 2016/12/09 07:36:07 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	index;
	size_t	i;

	index = ft_strlen(s1);
	i = 0;
	if (size == 0)
		return (index);
	while ((s2[i] != '\0') && ((index + i) < size - 1))
	{
		s1[index + i] = s2[i];
		i++;
	}
	s1[index + i] = '\0';
	if (index < size)
		return (ft_strlen(s2) + index);
	return (ft_strlen(s2) + size);
}
