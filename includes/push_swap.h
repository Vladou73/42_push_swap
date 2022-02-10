/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:17:43 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/10 12:56:40 by vnafissi         ###   ########.fr       */
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
	int				index;
	struct s_stack	*next;
}	t_stack;


//******************** LINKED LISTS ********************//
t_stack	*ft_create_elem(int n);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
int		ft_stack_len(t_stack **stack);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_print_values_indexes(t_stack **stack);

//******************** STACK OPERATIONS ********************//
void	ft_sa(t_stack **astack);
void	ft_sb(t_stack **astack);
void	ft_ss(t_stack **astack_a, t_stack **astack_b);
void	ft_pb(t_stack **astack_a, t_stack **astack_b);
void	ft_pa(t_stack **astack_a, t_stack **astack_b);
void	ft_ra(t_stack **astack);
void	ft_rb(t_stack **astack);
void	ft_rr(t_stack **astack_a, t_stack **astack_b);
void	ft_rra(t_stack **astack);
void	ft_rrb(t_stack **astack);
void	ft_rrr(t_stack **astack_a, t_stack **astack_b);

#endif
