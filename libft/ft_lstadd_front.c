/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:30:49 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/29 18:02:30 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajoute l’élément ’new’ au début de la liste.
//1) on colle le nouvel element a la liste chainee
//2) on indique que l'adresse du 1er element a change,
// on prend celle de new

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new)
	{
		new->next = *alst;
		*alst = new;
	}
}
