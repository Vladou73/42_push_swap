/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:29:06 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 18:42:21 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Renvoie le dernier élément de la liste.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	**alst;

	if (!lst)
		return (NULL);
	alst = &lst;
	while ((*alst)->next)
		*alst = (*alst)->next;
	return (*alst);
}
