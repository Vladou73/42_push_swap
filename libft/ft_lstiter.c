/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:52:13 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 22:04:53 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Itère sur la list lst et applique la fonction f au
//contenu chaque élément.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	**alist;

	if (!lst || !f)
		return ;
	alist = &lst;
	while (*alist)
	{
		f((*alist)->content);
		*alist = (*alist)->next;
	}
}
