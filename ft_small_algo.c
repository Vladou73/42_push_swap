/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:52:45 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 15:53:07 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_rules_3_numbers(
		t_stack **astack_a, t_stack *tmp1, t_stack *tmp2, t_stack *tmp3
	)
{
	if (tmp1->n > tmp2->n && tmp1->n < tmp3->n)
		ft_sa(astack_a);
	else if (tmp1->n < tmp2->n && tmp1->n > tmp3->n)
		ft_rra(astack_a);
	else if (tmp1->n < tmp2->n && tmp1->n < tmp3->n)
	{
		ft_rra(astack_a);
		ft_sa(astack_a);
	}
	else if (tmp1->n > tmp2->n && tmp2->n > tmp3->n)
	{
		ft_ra(astack_a);
		ft_sa(astack_a);
	}
	else
		ft_ra(astack_a);
	return ;
}

void	sort_3_numbers(t_stack **astack_a)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	t_stack	*tmp3;

	tmp1 = *astack_a;
	tmp2 = tmp1->next;
	tmp3 = tmp2->next;
	if (stack_is_sorted(*astack_a))
		return ;
	ft_rules_3_numbers(astack_a, tmp1, tmp2, tmp3);
	return ;
}

t_stack	*find_min_in_stack(t_stack **astack_a)
{
	t_stack	*min;
	t_stack	*temp;

	min = *astack_a;
	temp = *astack_a;
	while (min && temp)
	{
		if (min->n > temp->n)
		{
			min = temp;
			temp = *astack_a;
		}
		else
			temp = temp->next;
	}
	return (min);
}

int	find_elem_index_in_stack(t_stack **astack, t_stack *elem)
{
	int		index;
	t_stack	*temp;

	index = 0;
	temp = *astack;
	while (temp != elem)
	{
		temp = temp->next;
		index++;
	}
	return (index);
}

void	sort_small_algo(t_stack **astack_a, t_stack **astack_b)
{
	int		len_stack;
	t_stack	*min;

	len_stack = ft_stack_len(astack_a);
	if (len_stack > 3)
	{
		while (len_stack > 3)
		{
			min = find_min_in_stack(astack_a);
			while (min != *astack_a)
			{
				if (find_elem_index_in_stack(astack_a, min) < 3)
					ft_ra(astack_a);
				else
					ft_rra(astack_a);
			}
			ft_pb(astack_a, astack_b);
			len_stack--;
		}
	}
	sort_3_numbers(astack_a);
	while (*astack_b)
		ft_pa(astack_a, astack_b);
}
