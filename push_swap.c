/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/10 12:59:59 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	array_is_number(char *arr)
{
	int	j;

	j = 0;
	if (arr[j] == '-')
		j++;
	if (!arr[j])
		return (0);
	while (arr[j])
	{
		if (!ft_isdigit(arr[j]))
			return (0);
		j++;
	}
	return (1);
}

int	args_have_duplicates(char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = 2;
		while (args[j] && j != i)
		{
			if (!ft_strncmp(args[i], args[j], 15))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	args_have_error(int argc, char **args)
{
	int	i;
	//1) check if all arguments are numbers. Check for '-' in first place of each argument
	printf("check if numbers\n");
	i = 1;
	while (args[i])
	{
		if (!array_is_number(args[i]))
			return (1);
		i++;
	}
	//2) transform all args with atoi. Check that they are all in ints range
	printf("check if integers\n");
	i = 1;
	while (args[i])
	{
		if (!ft_isint(ft_atoi_long(args[i])))
			return (1);
		i++;
	}
	//3) check if there are no duplicates
	printf("check if duplicates\n");
	if (argc >= 3 && args_have_duplicates(args))
		return (1);
	return (0);
}

void check_args(int argc, char **argv)
{
	//• If no parameters are specified, the program must not display anything and give the
	//prompt back
	if (argc == 1)
		exit(1);

	//• In case of error, you must display Error followed by a ’\n’ on the standard error.
	if (args_have_error(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

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

t_stack	*store_in_stack(int argc, char **args)
{
	t_stack	*new;
	t_stack *stack;

	printf("store in stack A\n");
	stack = ft_create_elem(ft_atoi(args[argc - 1]));
	argc--;

	while(argc >= 2)
	{
		new = ft_create_elem(ft_atoi(args[argc - 1]));
		ft_stack_add_front(&stack, new);
		argc--;
	}
	return (stack);
}

void	sort_big_algo(t_stack **astack_a, t_stack **astack_b)
{
	int		index;
	int		stack_len;
	t_stack	*tmp_i;
	t_stack	*tmp_j;
	
	printf("sort big algo\n");
	//1) change the numbers to indexes
	stack_len = ft_stack_len(astack_a);
	tmp_i = *astack_a;
	while (tmp_i)
	{
		tmp_j = *astack_a;
		index = 0;
		while (tmp_j)
		{
			if (tmp_i->n < tmp_j->n)
				index++;
		}
		tmp_i->index = stack_len - index - 1;
		tmp_i = tmp_i->next;
	}
	astack_b = NULL;
	//2) radix algorithm
	ft_print_values_indexes(astack_a);
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
