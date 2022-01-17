/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:31:25 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 15:23:53 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// vérifie si c est un unsigned char sur 7 bits, 
//entrant dans le jeu de caractères ASCII.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
