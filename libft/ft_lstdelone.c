/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:57:43 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 19:39:56 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Libère la mémoire de l’élément passé en argument
//en utilisant la fonction del puis avec free(3). La
//mémoire de next ne doit pas être free.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}
