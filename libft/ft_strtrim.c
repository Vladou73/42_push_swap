/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:52:37 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/02 17:00:08 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Alloue (avec malloc(3)) et retourne une 
// copie de la chaine ’s1’,
// sans les caractères spécifiés dans ’set’
// au début et à la fin de la chaine de caractères.
// Valeur de retour : La chaine de caractères trimmée.

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	len;

	while (is_in_set(*s1, set))
		s1++;
	len = ft_strlen(s1);
	if (len > 0)
	{
		while (is_in_set(s1[len - 1], set))
			len--;
	}
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}
