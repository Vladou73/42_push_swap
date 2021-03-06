/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:17:43 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 15:56:34 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				n;
	int				index;
	struct s_stack	*next;
}	t_stack;

//******************** LINKED LISTS ********************//
t_stack	*ft_create_elem(int n);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
int		ft_stack_len(t_stack **stack);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_set_null_free_elem(t_stack *elem);
void	ft_set_null_free_stack(t_stack **astack);

//******************** STACK OPERATIONS *****************//
void	ft_pb(t_stack **astack_a, t_stack **astack_b);
void	ft_pa(t_stack **astack_a, t_stack **astack_b);
void	ft_ra(t_stack **astack);
void	ft_sa(t_stack **astack);
void	ft_sb(t_stack **astack);
void	ft_rra(t_stack **astack);

//******************** CHECK ARGUMENTS *****************//
void	check_args(int argc, char **argv);
int		args_have_error(int argc, char **args);
int		args_have_duplicates(char **args);
int		array_is_number(char *arr);
t_stack	*store_in_stack(int argc, char **args);

//******************** ALGORITHM ********************//
int		stack_is_sorted(t_stack *stack);
void	ft_rotate_push_binaries(t_stack **astack_a, t_stack **astack_b, int i);
void	ft_push_all_first_stack(t_stack **astack_a, t_stack **astack_b);
int		count_bits(int n);
void	ft_add_indexes(t_stack **astack);
void	sort_big_algo(t_stack **astack_a, t_stack **astack_b);
void	ft_rules_3_numbers(
			t_stack **astack_a, t_stack *tmp1, t_stack *tmp2, t_stack *tmp3);
void	sort_3_numbers(t_stack **astack_a);
t_stack	*find_min_in_stack(t_stack **astack_a);
int		find_elem_index_in_stack(t_stack **astack, t_stack *elem);
void	sort_small_algo(t_stack **astack_a, t_stack **astack_b);

#endif
