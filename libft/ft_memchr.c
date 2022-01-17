/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:06:32 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/23 19:08:08 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memchr() function scans the initial n bytes of the memory 
//area pointed to by s for the first instance of c.
// Both c and the bytes of the memory area pointed to 
//by s are interpreted as unsigned char.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;
	unsigned char	charac;

	buffer = (unsigned char *) s;
	charac = (unsigned char) c;
	while (n > 0)
	{
		if (*buffer == charac)
			return (buffer);
		buffer++;
		n--;
	}
	return (NULL);
}
