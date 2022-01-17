/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:23:50 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/25 13:23:58 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applique la fonction f à chaque caractère de la
//chaîne de caractères transmise comme argument, et
//en passant son index comme premier argument. Chaque
//caractère est transmis par adresse à f pour être
//modifié si nécessaire.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
