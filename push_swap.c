/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:52:03 by vnafissi          #+#    #+#             */
/*   Updated: 2022/01/17 12:20:26 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includes/push_swap.h"

int	args_have_error(char **argv)
{
	//1) check if all arguments are ints : all must be in ints range
	//2) transform all args with atoi
	//3) check if there are no duplicates
	// if error return (1)
	
	return (0);
}

void check_args(int argc, char **argv)
{
	//• If no parameters are specified, the program must not display anything and give the
	//prompt back
	if (argc == 1)
		exit();

	//• In case of error, you must display Error followed by a ’\n’ on the standard error.
	//Errors include for example: some arguments aren’t integers, some arguments are
	//bigger than an integer, and/or there are duplicates.
	if (args_have_error())
	{		
		ft_putstr_fd("Error\n", stderr);
		exit();
	}
}


int	main(int argc, char **argv)
{
	//1) check arguments function. if checks are not good, exit program	
	check_args(int argc, char **argv);

	//2)atoi all arguments and store them in stack a.
	//The first argument should be at the top of the stack 
	//so storing needs to start by last arg and then pile each arg above the latest



	return (0);
}