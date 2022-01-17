/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:20:03 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 23:10:40 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Itère sur la liste lst et applique la fonction f au
//contenu de chaque élément. Crée une nouvelle liste
//résultant des applications successives de f. la
//fonction del est la pour detruire le contenu d un
//element si necessaire

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_tmp;
	t_list	*new_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		lst = lst->next;
		new_tmp = ft_lstnew(f(lst->content));
		if (!new_tmp)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_tmp);
	}
	return (new_lst);
}
