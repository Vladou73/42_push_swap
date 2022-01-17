/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:32:55 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 12:25:42 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convertit la lettre c en majuscule si c'est possible.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
