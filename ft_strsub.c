/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:43:41 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/08 16:50:09 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *r;

	if (!(r = (char*)ft_memalloc(sizeof(char) * len + 1)))
		return (NULL);
	return (ft_strncpy(r, s + start, len));
}
