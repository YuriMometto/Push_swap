/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:07:40 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/28 17:29:19 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_list **stack_a)
{
	int		size;
	t_list	*tmp;
	t_list	*swap;

	tmp = stack_a;
	if (stack->value && stack->nxt->value)
	{
		stack_a = stack_a->nxt;
		tmp->nxt = stack_a->nxt;
		stack_a->nxt = tmp;
	}
	return ();
}
int	sb(t_list **stack_b)
int	ss(t_list **stack_a, t_list **stack_b)
int	pa(t_list **stack_a, t_list **stack_b)
int	pb(t_list **stack_a, t_list **stack_b)
int	ra(t_list **stack_a)
int	rb(t_list **stack_b)
int	rr(t_list **stack_a, t_list **stack_b)
int	rra(t_list **stack_a)
int	rrb(t_list **stack_b)
int	rrr(t_list **stack_a, t_list **stack_b)
