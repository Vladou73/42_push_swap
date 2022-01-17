/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:31:01 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 18:31:36 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// vérifie si l'on a un caractère alphanumérique. 
//C'est équivalent à (isalpha(c) || isdigit(c)).

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
