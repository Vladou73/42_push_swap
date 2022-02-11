/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:11:21 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:25 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_rotate_push_binaries(t_stack **astack_a, t_stack **astack_b, int i)
{
	int	initial_len;
	
	initial_len = ft_stack_len(astack_a);
	while (initial_len)
	{
		if ((*astack_a)->index & (1 << i))
			ft_ra(astack_a);
		else
			ft_pb(astack_a, astack_b);
		initial_len--;
	}
}

void	ft_push_all_first_stack(t_stack **astack_a, t_stack **astack_b)
{
	t_stack	*tmp;
	
	tmp = *astack_b;
	while (tmp)
	{
		tmp = tmp->next;
		ft_pa(astack_a, astack_b);
	}
}

int count_bits(int n)
{
	int count;
	
	count = 0;
	while (n)
	{
		count++;
		n >>= 1;
	}
	return count;
}         

void	ft_add_indexes(t_stack **astack)
{
	int		index;
	int		stack_len;
	t_stack	*tmp_i;
	t_stack	*tmp_j;

	stack_len = ft_stack_len(astack);
	tmp_i = *astack;
	while (tmp_i)
	{
		tmp_j = *astack;
		index = 0;
		while (tmp_j)
		{
			if (tmp_i->n < tmp_j->n)
				index++;
			tmp_j = tmp_j->next;
		}
		tmp_i->index = stack_len - index - 1;
		tmp_i = tmp_i->next;
	}
}

void	sort_big_algo(t_stack **astack_a, t_stack **astack_b)
{
	int	maximum_bits;
	int	i;

	ft_add_indexes(astack_a);
	maximum_bits = count_bits(ft_stack_len(astack_a));
	i = 0;	
	while (i < maximum_bits)
	{
		ft_rotate_push_binaries(astack_a, astack_b, i);
		ft_push_all_first_stack(astack_a, astack_b);
		i++;
	}
}
