/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/11 12:26:46 by vnafissi         ###   ########.fr       */
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

void	sort_big_algo(t_stack **astack_a, t_stack **astack_b)
{	
	int	maximum_bits;
	int	i;

	printf("sort big algo\n");
	//1) add indexes to structures
	printf("add index to structures\n");
	ft_add_indexes(astack_a);

	//2) radix algorithm using bitwise operations
	//b) find len of longest binary (between 1 and 32)
	
	//c) perform (box changing of numbers) x (len of longest binary) with bitwise operations using operations
	printf("process radix sort\n");
	
	maximum_bits = count_bits(ft_stack_len(astack_a));
	printf("maximum_bits=%d\n",maximum_bits);
	i = 0;	
	//while (i < maximum_bits)
	ft_rotate_push_binaries(astack_a, astack_b, i);
	ft_push_all_first_stack(astack_a, astack_b);
	
	ft_print_values_indexes(astack_a);
	printf("\nstack_b\n\n");
	ft_print_values_indexes(astack_b);
	

	//3) print operations
	
}

void	sort_small_algo(t_stack **astack_a, t_stack **astack_b)
{
	printf("sort small algo\n");
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

	//1) check arguments function. if checks are not good, exit program
	check_args(argc, argv);

	//2)parsing
		//atoi all arguments, transform them in structures and store them in stack A as a linked list.
		//The first argument should be at the top of the stack
		//so storing needs to start by last arg and then pile each arg above the latest
	stack_a = store_in_stack(argc, argv);

	//3) check if stack a is already sorted, return 0. could maybe also check that stack b is empty ?
	if (stack_is_sorted(stack_a))
		return (0);

	//4) check operation functions are working
	
	//5) decide which algo to chose : small algo, big algo
	if (ft_stack_len(&stack_a) <= 3)
		sort_small_algo(&stack_a, &stack_b);
	else
		sort_big_algo(&stack_a, &stack_b);

	return (0);
}
