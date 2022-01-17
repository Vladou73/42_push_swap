/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:11:08 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 12:23:26 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// remplit les n premiers octets de la zone mémoire 
//pointée par s avec l'octet c.

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned int	i;
	char			*s;

	i = 0;
	s = (char *) ptr;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
