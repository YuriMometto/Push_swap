/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:38:11 by ymometto          #+#    #+#             */
/*   Updated: 2024/04/02 15:50:02 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstcreate(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
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

int	*order_arr(t_list *stack)
{
	int	index;
	int	size;
	int	*arr;

	index = 0;
	size = list_size(stack);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (index < size)
	{
		arr[index] = stack->value;
		stack = stack->nxt;
		index++;
	}
	sort_arr(arr, size);
	return (arr);
}

void	create_index(t_list **a)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(a);
	while (head)
	{
		head->index = index++;
		head = get_next_min(a);
	}
}

void	lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = ft_lstlast(*lst);
		tmp->nxt = nw;
		nw->nxt = NULL;
	}
	else
	{
		*lst = nw;
		(*lst)->nxt = NULL;
	}
}
