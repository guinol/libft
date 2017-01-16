/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:56:06 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 21:10:40 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	/*while (s1[i] != 0 && s1[i] == s2[i] && s2[i] != 0 && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);*/
	return (ft_strcmp(ft_strsub(s1, 0, n), ft_strsub(s2, 0, n)));
}
//strsub + strcmp
