/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:12:35 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/16 15:28:50 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	int i;
	int r;
	int neg;

	i = 0;
	neg = 1;
	r = 0;
	while (s[i] == '\v' || s[i] == '\t' || s[i] == '\f' || s[i] == '\n' ||
			s[i] == '\r' || s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + ((s[i] - '0') % 10);
		i++;
	}
	return (r * neg);
}
