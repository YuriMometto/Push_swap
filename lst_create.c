/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:38:11 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/28 10:43:00 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstcreate(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->value = value;
	new->index = -1;
	new->nxt = NULL;
	return (new);
}

int	list_size(t_list *stack)
{
	t_list	*tmp;
	int		index;

	index = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		index++;
		tmp = tmp->nxt;
	}
	return (index);
}

t_list	*get_next_min(t_list **stack)
{
	t_list	*tmp;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	tmp = *stack;
	if (tmp)
	{
		while (tmp)
		{
			if ((tmp->index == -1) && (!has_min || tmp->value < min->value))
			{
				min = tmp;
				has_min = 1;
			}
			tmp = tmp->nxt;
		}
	}
	return (min);
}

void	create_index(t_list **a)
{
	t_list	*tmp;
	int		counter;

	counter = 0;
	tmp = get_next_min(a);
	while (tmp)
	{
		tmp->index = counter++;
		tmp = get_next_min(a);
	}
}

void	lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = nw;
		return ;
	}
	temp = *lst;
	while (temp->nxt != NULL)
		temp = temp->nxt;
	temp->nxt = nw;
}
