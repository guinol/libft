/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:55:01 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/05 15:50:42 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int ft_nb_words(char *ch, char c)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (ch[i] != 0)
	{
		if (ch[i] == c && ch[i + 1] != c && ch[i + 1])
			nb++;
		if (ch[i] != c && nb == 0)
			nb++;
		i++;
	}
	return (nb);
}

int wrdlen(char *s, char c, int i)
{
	int tmp;
	tmp = i;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i - tmp - 1);
}

char ** ft_strsplit(char const *s, char c)
{
	char **r;
	int cnt;
	int index;
	int i;
	int tmp;

	cnt = 0;
	index = 0;
	i = 0;
	r = (char**)malloc(sizeof(char*) * ft_nb_words((char *)s, c) + 1);
	if (r == NULL || c == '\0')
		return (NULL);
	while (cnt < ft_nb_words((char *)s, c))
	{
		i = 0;
		while (s[index] == c)
			index++;
		r[cnt] = (char*)malloc(sizeof(char) * wrdlen((char*)s, c, index) + 1);
		if (r[cnt] == NULL)
			return (NULL);
		tmp = index;
		while (i < wrdlen((char*)s, c, tmp) + 1)
			r[cnt][i++] = s[index++];
		r[cnt++][i] = '\0';
	}


	return (r);
}*/

int ft_nb_words(char *ch, char c)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (ch[i] != 0)
	{
		if (ch[i] == c && ch[i + 1] != c && ch[i + 1] != '\0')
			nb++;
		if (ch[i] != c && nb == 0)
			nb++;
		i++;
	}
	return (nb);
}

int wrdlen(char *s, char c, int i)
{
	int tmp;
	tmp = i;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i - tmp - 1);
}

char ** ft_strsplit(char const *s, char c)
{
	char **r;
	int cnt;
	int index;
	int i;
	int tmp;

	cnt = 0;
	index = 0;
	i = 0;
	r = (char**)malloc(sizeof(char*) * ft_nb_words((char *)s, c) + 1);
	if (r == NULL)
		return (NULL);
	while (cnt < ft_nb_words((char *)s, c))
	{
		i = 0;
		while (s[index] == c)
			index++;
		r[cnt] = (char*)malloc(sizeof(char) * wrdlen((char*)s, c, index) + 1);
		if (r[cnt] == NULL)
			return (NULL);
		tmp = index;
		while (i < wrdlen((char*)s, c, tmp) + 1)
			r[cnt][i++] = s[index++];
		r[cnt++][i] = '\0';
	}
	return (r);
}
