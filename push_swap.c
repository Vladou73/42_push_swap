/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 14:08:04 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	stack_is_sorted(t_stack *stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!stack || !(stack->next))
		return (1);
	tmp1 = stack;
	while (tmp1->next)
	{
		tmp2 = tmp1->next;
		if (tmp1->n > tmp2->n)
			return (0);
		tmp1 = tmp1->next;
	}
	return (1);
}

void	sort_3_numbers(t_stack **astack_a)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	t_stack	*tmp3;

	tmp1 = *astack_a;
	tmp2 = tmp1->next;
	tmp3 = tmp2->next;
	if (tmp1->n > tmp2->n && tmp1->n < tmp3->n) //case 1 0 2
		ft_sa(astack_a);
	else if (tmp1->n < tmp2->n && tmp1->n > tmp3->n) //case 1 2 0
		ft_rra(astack_a);
	else if (tmp1->n < tmp2->n && tmp1->n < tmp3->n) //case 0 2 1
	{
		ft_rra(astack_a);
		ft_sa(astack_a);
	}
	else if (tmp1->n > tmp2->n && tmp2->n > tmp3->n) //case 2 1 0
	{
		ft_ra(astack_a);
		ft_sa(astack_a);
	}
	else //case 2 0 1
		ft_ra(astack_a);
	return;
}

void	sort_small_algo(t_stack **astack_a, t_stack **astack_b)
{
	int		len_stack;
	t_stack	*min;
	t_stack *temp;
	
	len_stack = ft_stack_len(astack_a);
	if (len_stack > 3)
	{
		while (len_stack > 3)
		{
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
			while (min != *astack_a)
				ft_ra(astack_a);
			ft_pb(astack_a, astack_b);
			len_stack--;
		}
	}
	sort_3_numbers(astack_a);
	while (*astack_b)
		ft_pa(astack_a, astack_b);
}

int	main(int argc, char **argv)
{
 	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	check_args(argc, argv);
	stack_a = store_in_stack(argc, argv);
	if (!stack_a)
		return (0);
	if (stack_is_sorted(stack_a))
	{
		ft_set_null_free_stack(&stack_a);
		return (0);
	}
	if (ft_stack_len(&stack_a) < 6)
		sort_small_algo(&stack_a, &stack_b);
	else
		sort_big_algo(&stack_a, &stack_b);

	printf("\nstack_a\n");
	ft_print_values_indexes(&stack_a);
	printf("\nstack_b\n");
	ft_print_values_indexes(&stack_b);

	ft_set_null_free_stack(&stack_a);
	return (0);
}
