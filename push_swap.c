/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladimir <vladimir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/07 15:45:21 by vladimir         ###   ########.fr       */
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
			printf("%s, %s\n",args[i], args[j]);
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
		printf("%s\n",args[i]);
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
	//Errors include for example: some arguments aren’t integers, some arguments are not ints (bigger or lower than max int / min int)
	//and/or there are duplicates.
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

int	main(int argc, char **argv)
{
	//0 CAUTION : for all functions used from libft, need to check these functions and make sure they have no pb

	//1) check arguments function. if checks are not good, exit program
	check_args(argc, argv);

	//2)parsing
		//1st check if args are of type "1 2 3 4 5" et 1 2 3 4 5 => ie if it needs split => apparemment pas besoin de faire ca. gerer uniquement comme sous bash. si on nous donne ca "1 2 3 4 5" il faut considerer que c'est une erreur
	//2nd atoi all arguments and store them in stack a.
		//The first argument should be at the top of the stack
		//so storing needs to start by last arg and then pile each arg above the latest

	//3) check if stack a is already sorted, return 0. could maybe also check that stack b is empty ?
	// if stack_is_sorted()
	// 	return (0);

	//4) go to function which sorts stacks
	return (0);
}
