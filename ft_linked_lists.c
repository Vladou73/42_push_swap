/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_lists.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:54:07 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/08 17:58:07 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

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
		*stack = new;
	}
}

int	ft_stack_len(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	if (!(*stack))
		return (0);
	tmp = *stack;
	i = 1;
	printf("%d\n", tmp->n);
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
		printf("%d\n", tmp->n);
	}
	return (i);
}