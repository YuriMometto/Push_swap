/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:46:36 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/28 13:42:31 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnbr(char *nbr)
{
	int	index;

	index = 0;
	if (nbr[0] == '-')
		index++;
	while (nbr[index])
	{
		if (!ft_isdigit(nbr[index]))
			return (0);
		index++;
	}
	return (1);
}

int	ft_cmp(int tmp, char **args, int index)
{
	index++;
	while (args[index])
	{
		if (tmp == ft_atoi(args[index]))
			return (1);
		index++;
	}
	return (0);
}

void	ft_free(char **args)
{
	int	index;

	index = 0;
	while (args[index])
		index++;
	while (index > 0)
	{
		free(args[index]);
		index--;
	}
}

int	is_sorted(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp && tmp->nxt)
	{
		if (tmp->value > tmp->nxt->value)
			return (0);
		tmp = tmp->nxt;
	}
	return (1);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*hd;

	hd = stack;
	while (hd)
	{
		tmp = hd;
		hd = hd->nxt;
		free(tmp);
	}
	free(stack);
}
