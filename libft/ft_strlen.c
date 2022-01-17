/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:40:57 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 12:24:46 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calcule la longueur de la chaîne de caractères s,
// sans compter l'octet nul « \0 » final.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
