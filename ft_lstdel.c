/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 15:21:39 by agarcia-          #+#    #+#             */
/*   Updated: 2016/12/21 19:07:40 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list *tmp;

  tmp = alst;
  while (tmp->next)
  {
  tmp = (**alst).next;
  del((**alst).content, (**alst).content_size);
  ft_memdel((void**)alst);
  alst = tmp;
  }
}
