/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:25:20 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 18:24:06 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copie n octets depuis la zone mémoire src vers la zone mémoire dest.
// Les deux zones peuvent se chevaucher : 
// la copie se passe comme si les octets de src étaient d'abord copiés
// dans une zone temporaire 
// qui ne chevauche ni src ni dest, 
//et les octets sont ensuite copiés de la zone temporaire vers dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			((char *) dest)[n - 1] = ((char *) src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
