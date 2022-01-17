/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:09:56 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 12:23:15 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La fonction memcpy() copie n octets depuis la zone mémoire src 
// vers la zone mémoire dest. Les deux zones ne doivent pas se chevaucher.
// La fonction memcpy() renvoie un pointeur sur dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
