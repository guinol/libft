/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:08:35 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 15:15:16 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	//int	i;
	//int	r;

	if (s1 && s2)
	{
		/*r = 0;
		i = 0;
		while (s1[i] != 0 && s2[i] != 0 && n != 0)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
			n--;
		}
		if (s1[i] != s2[i])
			return (0);*/
		if (ft_strcmp(ft_strsub((char*)s1, 0, n), ft_strsub((char*)s2, 0, n)) != 0)
                        return (0);
		return (1);
	}
	return (0);
}
