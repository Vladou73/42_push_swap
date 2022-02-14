/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_lists2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <vnafissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:23:04 by vnafissi          #+#    #+#             */
/*   Updated: 2022/02/14 14:23:42 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_set_null_free_stack(t_stack **astack)
{
	t_stack	*tmp;

	if (!(*astack))
		return ;
	while (*astack)
	{
		tmp = (*astack)->next;
		ft_set_null_free_elem(*astack);
		*astack = tmp;
	}
}
