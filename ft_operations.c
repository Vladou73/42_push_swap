/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:16:56 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/11 14:05:12 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

//pa : push a - take the first element at the top of b and put it at the top of a. Do
//nothing if b is empty.
void	ft_pa(t_stack **astack_a, t_stack **astack_b)
{
	t_stack	*tmp1;

	if (!astack_b)
		return;
	tmp1 = (*astack_b)->next;
	ft_stack_add_front(astack_a, *astack_b);
	*astack_b = tmp1;
	ft_putstr_fd("pa\n", 1);
}

//pb : push b - take the first element at the top of a and put it at the top of b. Do
//nothing if a is empty.
void	ft_pb(t_stack **astack_a, t_stack **astack_b)
{
	t_stack	*tmp1;

	if (!astack_a)
		return;
	tmp1 = (*astack_a)->next;
	ft_stack_add_front(astack_b, *astack_a);
	*astack_a = tmp1;
	ft_putstr_fd("pb\n", 1);
}

//ra : rotate a - shift up all elements of stack a by 1. The first element becomes
//the last one.
void	ft_ra(t_stack **astack)
{
	t_stack *tmp;

	if (!(*astack) || !(*astack)->next)
		return;
	tmp = *astack;
	*astack = (*astack)->next;
	ft_stack_add_back(astack, tmp);
	tmp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}
