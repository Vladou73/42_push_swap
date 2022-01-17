/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:02 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 12:25:09 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the	first occurrence of the	null-terminated string s2 in the
// string s1, where not more than len characters are searched.

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *) s1);
	i = 0;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && s2[j] && i + j < len && s1[i + j] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *) s1 + i);
		i++;
	}
	return (NULL);
}
