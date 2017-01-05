#include "libft.h"
#include <stdio.h>

//---------------------------lstdel
/*
void acme_delete(void * content, size_t size)
{
	*(char *)content = 'B';
	*(char *)(content + 1) = 'l';
	size = 0;
}

int		main()
{
	t_list *lst;
	t_list *nd;
	t_list *eme;
	t_list *new;
	char *s;
	char *s2;
	char *s3;
	char *s4;

	s4 = "yaya";
	s = "C";
	s2 = "fifou";
	s3 = "pas de sucre, merci";
	lst = ft_lstnew((void const *)s, ft_strlen(s));
	lst->next = ft_lstnew((void const *)s2, ft_strlen(s2));
	lst->next->next = ft_lstnew((void const *)s3, ft_strlen(s3));
	nd = lst->next;
	eme = lst->next->next;
	new = ft_lstnew((void const *)s4, ft_strlen(s4));
	//ft_lstadd(&lst, new);
	printf("9 liste : %p", new);
	printf("\n");
	printf("9 contenu : %s", (char*)new->content);
	printf("\n");
	printf("9 taille : %s", (char*)ft_itoa((int)new->content_size));
	printf("\n");
	printf("9 next : %p", new->next);
	printf("\n");
	printf("\n");
	printf("P liste : %p", new);
	printf("\n");
	printf("P contenu : %s", (char*)new->content);
	printf("\n");
	printf("P taille : %s", (char*)ft_itoa((int)new->content_size));
	printf("\n");
	printf("P next : %p", new->next);
	printf("\n");
	printf("\n");
	printf("1 liste : %p", lst);
	printf("\n");
	printf("1 contenu : %s", (char*)lst->content);
	printf("\n");
	printf("1 taille : %s", (char*)ft_itoa((int)lst->content_size));
	printf("\n");
	printf("1 next : %p", lst->next);
	printf("\n");
	printf("2---- liste : %p", nd);
	printf("\n");
	printf("2---- contenu : %s", (char*)nd->content);
	printf("\n");
	printf("2---- taille : %s", (char*)ft_itoa((int)nd->content_size));
	printf("\n");
	printf("2---- next : %p", nd->next);
	printf("\n");
	printf("3 liste : %p", eme);
	printf("\n");
	printf("3 contenu : %s", (char*)eme->content);
	printf("\n");
	printf("3 taille : %s", (char*)ft_itoa((int)eme->content_size));
	printf("\n");
	printf("3 next : %p", eme->next);
	printf("\n");
	printf("\n");
	ft_lstadd(&lst, new);
	//ft_lstdel(&nd, &acme_delete);
	printf("1 liste : %p", lst);
	printf("\n");
	printf("1 XXcontenu : %s", (char*)lst->content);
	printf("\n");
	printf("1 XXtaille : %s", (char*)ft_itoa((int)lst->content_size));
	printf("\n");
	printf("1 XXnext : %p", lst->next);
	printf("\n");
	printf("2---- liste : %p", nd);
	printf("\n");
	if (&nd == NULL)
	{
	printf("2---- contenu : %s", (char*)nd->content);
	printf("\n");
	printf("2---- taille : %s", (char*)ft_itoa((int)nd->content_size));
	printf("\n");
	printf("2---- next : %p", nd->next);
	printf("\n");
	printf("3 liste : %p", eme);
	printf("\n");
	}
	if (&eme == NULL)
	{
	printf("3 contenu : %s", (char*)eme->content);
	printf("\n");
	printf("3 taille : %s", (char*)ft_itoa((int)eme->content_size));
	printf("\n");
	printf("3 next : %p", eme->next);
	printf("\n");
	return(0);
}
}
*/
//---------------------------lstdelone

void acme_delete(void * content, size_t size)
{
	*(char *)content = 'B';
	*(char *)(content + 1) = 'l';
	size = 0;
}

int		main()
{
	t_list *lst;
	t_list *nd;
	t_list *eme;
	t_list *new;
	char *s;
	char *s2;
	char *s3;
	char *s4;

	s4 = "yaya";
	s = "C";
	s2 = "fifou";
	s3 = "pas de sucre, merci";
	lst = ft_lstnew((void const *)s, ft_strlen(s));
	lst->next = ft_lstnew((void const *)s2, ft_strlen(s2));
	lst->next->next = ft_lstnew((void const *)s3, ft_strlen(s3));
	nd = lst->next;
	eme = lst->next->next;
	new = ft_lstnew((void const *)s4, ft_strlen(s4));
	//ft_lstadd(&lst, new);
	printf("1 liste : %p", lst);
	printf("\n");
	printf("1 contenu : %s", (char*)lst->content);
	printf("\n");
	printf("1 taille : %s", (char*)ft_itoa((int)lst->content_size));
	printf("\n");
	printf("1 next : %p", lst->next);
	printf("\n");
	printf("\n");
	printf("2 liste : %p", lst->next);
	printf("\n");
	printf("2 contenu : %s", (char*)lst->next->content);
	printf("\n");
	printf("2 taille : %s", (char*)ft_itoa((int)lst->next->content_size));
	printf("\n");
	printf("2 next : %p", lst->next->next);
	printf("\n");
	printf("\n");
	printf("3 liste : %p", lst->next->next);
	printf("\n");
	printf("3 contenu : %s", (char*)lst->next->next->content);
	printf("\n");
	printf("3 taille : %s", (char*)ft_itoa((int)lst->next->next->content_size));
	printf("\n");
	printf("3 next : %p", lst->next->next->next);
	printf("\n");
	printf("\n");
	ft_lstdelone(&nd, &acme_delete);
	printf("1 liste : %p", lst);
	printf("\n");
	printf("1 contenu : %s", (char*)lst->content);
	printf("\n");
	printf("1 taille : %s", (char*)ft_itoa((int)lst->content_size));
	printf("\n");
	printf("1 next : %p", lst->next);
	printf("\n");
	printf("2 liste : %p", nd);
	printf("\n");
	printf("2 contenu : %s", (char*)nd->content);
	printf("\n");
	printf("2 taille : %s", (char*)ft_itoa((int)nd->content_size));
	printf("\n");
	printf("2 next : %p", nd->next);
	printf("\n");
	printf("3 liste : %p", eme);
	printf("\n");
	printf("3 contenu : %s", (char*)eme->content);
	printf("\n");
	printf("3 taille : %s", (char*)ft_itoa((int)eme->content_size));
	printf("\n");
	printf("3 next : %p", eme->next);
	printf("\n");
	return(0);
}

//---------------------------lstnew
/*
int		main()
{
	t_list *lst;
	char *s;
	s = "Cuando vamos, viene carlos";
	lst = ft_lstnew((void const *)s, ft_strlen(s));
	printf("%s", (char*)lst->content);
	return(0);
}
*/

//---------------------------STRSPLIT
/*
int		main()
{
	char *s;
	s = ft_strsplit("agaay jiojoi y yy sdyp skokvpofjvnyyy");
	printf("%s", s);
	return(0);
}
*/

//---------------------------STRTRIM
/*
int		main()
{
	char *s;
	s = ft_strtrim("   a	a aaa	 ");
	printf("%s", s);
	return(0);
}
*/

//---------------------------ITOA
/*
int		main()
{
	char *s;
	s = ft_itoa(-474);
	printf("%s", s);
	return(0);
}
*/

//---------------------------ATOI
/*
int		main()
{
	int n;
	n = ft_atoi(" 	20t16 45 kk 1");
	printf("%d", n);
	return(0);
}
*/

//---------------------------TOLOWER
/*
int     main()
{
	int i = 0;
	char *s = "aBcDeFgH";
	while(s[i])
	{
		ft_putchar(ft_tolower(s[i]));
		i++;
	}
	return(0);
}
*/

//---------------------------TOUPPER
/*
int		main()
{
	int i = 0;
	char *s = "aBcDeFgH";
	while(s[i])
	{
		ft_putchar(ft_toupper(s[i]));
		i++;
	}
	return(0);
}
*/

//---------------------------PUTENDL
/*
int		main()
{
   ft_putendl("ayo auo");
   return(0);
}
   */
