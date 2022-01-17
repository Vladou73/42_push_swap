/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:36:23 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/02 16:51:15 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// The strlcat() function appends the NUL-terminated 
// string src to the end of dst. 
// It will append at most size - strlen(dst) - 1 bytes, 
// NUL-terminating the result.
//if strlcat() traverses size characters 
// without finding a NUL, 
//the length of the string is considered to be size 
// and the destination string will not be NUL-terminated

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1 < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = 0;
	return (ft_strlen(src) + i);
}
