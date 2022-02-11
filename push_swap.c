/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:43 by vnafissi         ###   ########.fr       */
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

void	sort_small_algo(t_stack **astack_a, t_stack **astack_b)
{
	astack_a = NULL;
	astack_b = NULL;
}

int	main(int argc, char **argv)
{
 	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	//0 CAUTION : for all functions used from libft, need to check these functions and make sure they have no pb
	check_args(argc, argv);
	stack_a = store_in_stack(argc, argv);
	if (stack_is_sorted(stack_a))
	{
		ft_free_linked_list(&stack_a);
		return (0);
	}
	if (ft_stack_len(&stack_a) <= 3)
		sort_small_algo(&stack_a, &stack_b);
	else
		sort_big_algo(&stack_a, &stack_b);
	
	printf("\nstack_a\n");
	ft_print_values_indexes(&stack_a);
	
	ft_free_linked_list(&stack_a);
	return (0);
}
