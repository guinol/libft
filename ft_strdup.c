/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:52:35 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 17:07:27 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;
	int		j;

	i = ft_strlen(src);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
