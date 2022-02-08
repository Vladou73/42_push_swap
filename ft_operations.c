/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:16:56 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/08 18:56:50 by vnafissi         ###   ########.fr       */
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
}

//sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
//is only one or no elements).
void	ft_sb(t_stack **astack)
{
	t_stack	*tmp;
	
	if (!*astack || !(*astack)->next)
		return;
	tmp = (*astack)->next;
	(*astack)->next = tmp->next;
	tmp->next = *astack;
	*astack = tmp;
}

//ss : sa and sb at the same time.
void	ft_ss(t_stack **astack_a, t_stack **astack_b)
{
	ft_sa(astack_a);
	ft_sb(astack_b);
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
}

//ra : rotate a - shift up all elements of stack a by 1. The first element becomes
//the last one.


//rb : rotate b - shift up all elements of stack b by 1. The first element becomes
//the last one.

//rr : ra and rb at the same time.

//rra : reverse rotate a - shift down all elements of stack a by 1. The last element
//becomes the first one.