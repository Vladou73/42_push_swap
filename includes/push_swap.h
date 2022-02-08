/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:17:43 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/08 13:57:29 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_create_elem(int n);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
int	ft_stack_len(t_stack **stack);

#endif

