/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_lists.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:54:07 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 14:23:22 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack	*ft_create_elem(int n)
{
	t_stack	*elem;

	elem = ft_calloc(1, sizeof(t_stack));
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
	t_stack	*tmp;

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
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_set_null_free_elem(t_stack *elem)
{
	if (!elem)
		return ;
	elem->n = 0;
	elem->index = 0;
	elem->next = NULL;
	free(elem);
}
