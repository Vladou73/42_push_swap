/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:46:00 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 16:25:44 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajoute l’élément new à la fin de la liste.

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst)
			ft_lstlast(*alst)->next = new;
		else
			*alst = new;
	}
}
