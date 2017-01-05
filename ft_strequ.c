/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:08:35 by agarcia-          #+#    #+#             */
/*   Updated: 2016/12/02 16:08:37 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;
  int r;

  r = 0;
	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
    if (s1[i] != s2[i])
      return(0);
		i++;
	}
	return (1);
}
