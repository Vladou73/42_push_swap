/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:45:02 by vnafissi          #+#    #+#             */
/*   Updated: 2021/12/02 11:59:09 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Alloue (avec malloc(3)) et retourne une chaine de
//caractères représentant l’integer reçu en argument.
//Les nombres négatifs doivent être gérés.

#include "libft.h"

static size_t	int_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	process_while_loop(char *ptr, unsigned int n, size_t len)
{
	while (n > 0)
	{
		ptr[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*ptr;
	unsigned int	new_n;

	new_n = n;
	len = int_len(n);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		new_n = -n;
		ptr[0] = '-';
	}
	process_while_loop(ptr, new_n, len);
	return (ptr);
}