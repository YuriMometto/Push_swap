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

void	create_index(t_list *a)
{
	t_list	*stack;
	int		counter;
	int		*arr;

	counter = 0;
	arr = order_arr(a);
	while (arr[counter])
	{
		stack = a;
		while (stack->value && stack->value != arr[counter])
			stack = stack->nxt;
		stack->index = counter;
		counter++;
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
