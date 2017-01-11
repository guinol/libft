/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:23:16 by agarcia-          #+#    #+#             */
/*   Updated: 2016/12/02 12:23:20 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memset(void *r, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)r;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (r);
}
