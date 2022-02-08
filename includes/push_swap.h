/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:17:43 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/08 18:57:39 by vnafissi         ###   ########.fr       */
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


//******************** LINKED LISTS ********************//
t_stack	*ft_create_elem(int n);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
int	ft_stack_len(t_stack **stack);

//******************** STACK OPERATIONS ********************//
void	ft_sa(t_stack **astack);
void	ft_sb(t_stack **astack);
void	ft_ss(t_stack **astack_a, t_stack **astack_b);
void	ft_pb(t_stack **astack_a, t_stack **astack_b);
void	ft_pa(t_stack **astack_a, t_stack **astack_b);


#endif

