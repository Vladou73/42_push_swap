/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:16:56 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 12:06:04 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

//sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
//is only one or no elements).
void	ft_sa(t_stack **astack)
{
	t_stack	*tmp;

	if (!*astack || !(*astack)->next)
		return;
	tmp = (*astack)->next;
	(*astack)->next = tmp->next;
	tmp->next = *astack;
	*astack = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack **astack)
{
	t_stack	*tmp;

	if (!*astack || !(*astack)->next)
		return;
	tmp = (*astack)->next;
	(*astack)->next = tmp->next;
	tmp->next = *astack;
	*astack = tmp;
	ft_putstr_fd("sa\n", 1);
}

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

//rra : reverse rotate a - shift down all elements of stack a by 1. The last element
//becomes the first one.
void	ft_rra(t_stack **astack)
{
	t_stack *tmp1;
	t_stack *tmp2;

	if (!(*astack) || !(*astack)->next)
		return;
	tmp1 = *astack;
	while (tmp1->next)
	{
		if (!tmp1->next->next)
			tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	ft_stack_add_front(astack, tmp1);
	tmp2->next = NULL;
	*astack = tmp1;
	ft_putstr_fd("rra\n", 1);
}
