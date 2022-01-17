/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:01:00 by vnafissi          #+#    #+#             */
/*   Updated: 2021/11/25 12:22:52 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Écrit le caractère ’c’ sur le file descriptor
//donné.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
