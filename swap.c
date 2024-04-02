/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:27:48 by ymometto          #+#    #+#             */
/*   Updated: 2024/04/02 13:54:04 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list	**stack)
{
	t_list	*tmp;
	t_list	*head;

	tmp = *stack;
	head = *stack;
	if (head && head->nxt)
	{
		head = head->nxt;
		tmp->nxt = head->nxt;
		head->nxt = tmp;
		*stack = head;
		return (0);
	}
	return (-1);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		sa(stack_a);
		sb(stack_b);
		ft_putendl_fd("ss", 1);
		return (0);
	}
	return (-1);
}

void	ra_sa_rra(t_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
	rra(stack_a);
}
