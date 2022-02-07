/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladimir <vladimir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/07 17:54:13 by vladimir         ###   ########.fr       */
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

int	stack_is_sorted()
{
	//if stack a is sorted
		//return 1

	return (0);
}

t_stack	*ft_create_elem(int n)
{
	t_stack	*elem;

	elem = malloc(sizeof(t_list));
	// elem = ft_calloc(1, sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->n = n;
	elem->next = NULL;
	return (elem);
}

void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	if (new)
	{
		new->next = *stack;
		printf("stack->n=%d\n",(*stack)->n);
		printf("new->next->n=%d\n",new->next->n);
		*stack = new;
		printf("stack->n=%d\n\n",(*stack)->n);
	}
}

int	ft_stack_len(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	printf("coucou3\n");
	if (!(*stack))
		return (0);
	tmp = *stack;
	i = 1;
	while ((*stack)->next)
	{
		tmp = tmp->next;
		i++;
		printf("n=%d\n", (tmp)->n);
		printf("i=%d\n", i);
	}
	return (i);
}

void	store_in_stack(int argc, char **args)
{
	t_stack	*new;
	t_stack **stack;
	int		nbr;
	printf("store in stack A\n");

	new = ft_create_elem(ft_atoi(args[argc - 1]));
	stack = &new;
	argc--;
	printf("stack->n=%d\n",(*stack)->n);
	printf("stack->n=%d\n",(*stack)->n);
	while(argc >= 2)
	{
		nbr = ft_atoi(args[argc - 1]);
		printf("stack->n=%d\n",(*stack)->n);
		new = ft_create_elem(nbr);
		printf("stack->n=%d\n",(*stack)->n);
		ft_stack_add_front(stack, new);
		argc--;
	}
	printf("coucou2\n");
	printf("%d\n",(*stack)->next->next->n);
	// printf("%d\n",ft_stack_len(stack));

}

int	main(int argc, char **argv)
{
	//0 CAUTION : for all functions used from libft, need to check these functions and make sure they have no pb

	//1) check arguments function. if checks are not good, exit program
	check_args(argc, argv);

	//2)parsing
		//atoi all arguments, transform them in structures and store them in stack A as a linked list.
		//The first argument should be at the top of the stack
		//so storing needs to start by last arg and then pile each arg above the latest
	store_in_stack(argc, argv);

	//3) check if stack a is already sorted, return 0. could maybe also check that stack b is empty ?
	// if stack_is_sorted()
	// 	return (0);

	//4) go to function which sorts stacks
	return (0);
}