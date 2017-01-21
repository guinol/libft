/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:52:35 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/21 21:15:03 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;

	s = ft_strnew(ft_strlen(src));
	if (s == NULL)
		return (NULL);
	ft_memcpy((void*)s, (void*)src, ft_strlen(src));
	return (s);
}
