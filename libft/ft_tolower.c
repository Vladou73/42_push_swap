/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:33:07 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/25 18:33:25 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convertit la lettre c en minuscule si c'est possible.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
