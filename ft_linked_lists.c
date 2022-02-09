/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_lists.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladimir <vladimir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:54:07 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/09 16:50:00 by vladimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack	*ft_create_elem(int n)
{
	t_stack	*elem;

	elem = ft_calloc(1, sizeof(t_list));
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

void	ft_stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack *tmp;

	if (new)
	{
		if (!(*stack))
			stack = &new;
		else
		{
			tmp = *stack;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
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
