/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:32:57 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/25 12:38:03 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Écrit La chaine de caractères ’s’ sur le file
//descriptor donné, suivie d’un retour à la ligne.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
