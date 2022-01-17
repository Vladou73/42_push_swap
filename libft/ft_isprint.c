/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:32:02 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 15:31:01 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// vérifie s'il s'agit d'un caractère imprimable, 
//y compris l'espace.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
