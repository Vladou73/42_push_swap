/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialization.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:13:35 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 14:20:27 by vnafissi         ###   ########.fr       */
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

	i = 1;
	while (args[i])
	{
		if (!array_is_number(args[i]))
			return (1);
		i++;
	}
	i = 1;
	while (args[i])
	{
		if (!ft_isint(ft_atol(args[i])))
			return (1);
		i++;
	}
	if (argc >= 3 && args_have_duplicates(args))
		return (1);
	return (0);
}

void	check_args(int argc, char **argv)
{
	if (argc == 1)
		exit (1);
	if (args_have_error(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
}

t_stack	*store_in_stack(int argc, char **args)
{
	t_stack	*new;
	t_stack	*stack;

	stack = ft_create_elem(ft_atoi(args[argc - 1]));
	if (!stack)
		return (NULL);
	argc--;
	while (argc >= 2)
	{
		new = ft_create_elem(ft_atoi(args[argc - 1]));
		if (!new)
		{
			ft_set_null_free_stack(&stack);
			return (NULL);
		}
		ft_stack_add_front(&stack, new);
		argc--;
	}
	return (stack);
}
