/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:33:31 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/01 12:24:14 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// renvoie un pointeur sur une nouvelle chaîne de caractères
// qui est dupliquée depuis s. 
// La mémoire occupée par cette nouvelle chaîne 
// est obtenue en appelant malloc(3)

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
