/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:50:43 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/02 15:48:24 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to the last occurrence of 
// the character c in the string s

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *) s;
	i = (int)ft_strlen(ptr);
	while (i >= 0)
	{
		if (*(ptr + i) == (char)c)
			return (ptr + i);
		i--;
	}
	return (NULL);
}
