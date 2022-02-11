/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_lists.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:54:07 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/11 15:24:33 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack	*ft_create_elem(int n)
{
	t_stack	*elem;
	//ATTENTION je dois être sûr de set tous les trucs de mon elem à NULL ou 0
	//ATTENTION NEED TO FREE NEW ELEMENTS MEMORY AT END OF PROGRAM
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
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_free_linked_list(t_stack **astack)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	
	if (!(*astack))
		return;
	while (*astack)
	{
		tmp = *astack;
		tmp1 = tmp;
		while(tmp->next)
		{
			tmp1 = tmp;
			tmp = tmp->next;
		}
		printf("free tmp->n=%d\n",tmp->n);
		//printf("&tmp1=%s &tmp=%s\n", tmp1, tmp);
		if (tmp1 == tmp)
		{
			printf("coucou!\n");
			tmp1 = NULL;
		}
		else
			tmp1->next = NULL;
		free(tmp);
		//break;
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_lst;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
}

void	ft_print_values_indexes(t_stack **stack)
{
	t_stack	*tmp;

	if (!(*stack))
		return;
	tmp = *stack;
	printf("value=%d, index=%d\n",tmp->n, tmp->index);
	while (tmp->next)
	{
		tmp = tmp->next;
		printf("value=%d, index=%d\n",tmp->n, tmp->index);
	}
}