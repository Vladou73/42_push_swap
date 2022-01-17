/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:50:40 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 21:30:34 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Supprime et libère la mémoire de l’élément passé en
//paramètre, et de tous les élements qui suivent, à
//l’aide de del et de free(3)
//Enfin, le pointeur initial doit être mis à NULL.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_lst;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
}
