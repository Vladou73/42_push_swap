/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:10:31 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/02 15:02:45 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applique la fonction ’f’ à chaque caractère de la
//chaine de caractères passée en argument pour créer
//une nouvelle chaine de caractères (avec malloc(3))
//résultant des applications successives de ’f’.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		++i;
	}
	new_s[i] = '\0';
	return (new_s);
}
