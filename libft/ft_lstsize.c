/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:03:27 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 18:26:13 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compte le nombre d’éléments de la liste.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	**alst;

	if (!lst)
		return (0);
	alst = &lst;
	i = 1;
	while ((*alst)->next)
	{
		*alst = (*alst)->next;
		i++;
	}
	return (i);
}
