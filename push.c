/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:26:32 by ymometto          #+#    #+#             */
/*   Updated: 2024/04/02 07:26:54 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*tmp;
	t_list	*s_to;
	t_list	*s_from;

	if (list_size(*stack_from) == 0)
		return (-1);
	s_to = *stack_to;
	s_from = *stack_from;
	tmp = s_from;
	s_from = s_from->nxt;
	*stack_from = s_from;
	if (s_to == NULL)
	{
		s_to = tmp;
		s_to->nxt = NULL;
		*stack_to = s_to;
	}
	else
	{
		tmp->nxt = s_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
