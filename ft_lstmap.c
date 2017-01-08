/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 20:03:49 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/08 20:37:06 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *ret;

	ret = (t_list*)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	ret = f(lst);
	if (lst->next)
		ret->next = ft_lstmap(lst->next, f);
	return (ret);

}
