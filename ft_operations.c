/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:16:56 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 14:33:13 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_sa(t_stack **astack)
{
	t_stack	*tmp;

	if (!*astack || !(*astack)->next)
		return ;
	tmp = (*astack)->next;
	(*astack)->next = tmp->next;
	tmp->next = *astack;
	*astack = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	ft_pa(t_stack **astack_a, t_stack **astack_b)
{
	t_stack	*tmp1;

	if (!astack_b)
		return ;
	tmp1 = (*astack_b)->next;
	ft_stack_add_front(astack_a, *astack_b);
	*astack_b = tmp1;
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack **astack_a, t_stack **astack_b)
{
	t_stack	*tmp1;

	if (!astack_a)
		return ;
	tmp1 = (*astack_a)->next;
	ft_stack_add_front(astack_b, *astack_a);
	*astack_a = tmp1;
	ft_putstr_fd("pb\n", 1);
}

void	ft_ra(t_stack **astack)
{
	t_stack	*tmp;

	if (!(*astack) || !(*astack)->next)
		return ;
	tmp = *astack;
	*astack = (*astack)->next;
	ft_stack_add_back(astack, tmp);
	tmp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rra(t_stack **astack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!(*astack) || !(*astack)->next)
		return ;
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
