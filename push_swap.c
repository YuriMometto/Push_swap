/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:54:09 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/27 14:42:58 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(t_list *a, char *msg)
{
	ft_printf("%s", msg);
	if (a != NULL)
	{
		if (a->value == NULL)
			free(a);
		else if (b->value != NULL)
			free(b);
	}
}

void	verify(int argc, char **argv)
{
	int	index;
	int	pos_letter;

	pos_letter = 0;
	index = 1;
	if (argc < 2)
		error_message(NULL, "");
	while (index < argc)
	{
		pos_letter = 0;
		if (!argv[index][0] || (argv[index][0] && argv[index][0] == ' '))
			error_message(NULL, "Error\n");
		while (argv[index][pos_letter])
		{
			if ((!(ft_isdigit(argv[index][pos_letter]))
				&& argv[index][pos_letter] != ' '))
				error_message(NULL, "Error\n");
			pos_letter++;
		}
		index++;
	}
}

int	*sort_arr(int *arr, int size)
{
	int	index;
	int	temp;

	temp = 0;
	index = 0;
	while (index < (size - 1))
	{
		if (arr[index] > arr[index + 1])
		{
			temp = arr[index];
			arr[index] = arr[index + 1];
			arr[index + 1] = temp;
			index = 0;
		}
		else
			index++;
	}
	return (arr);
}

int	list_size(t_list	*stack)
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

void	init_stacks(t_list **a, char **argv, int argc)
{
	t_list	*s;
	int		index;

	index = 0;
	while (argv[index])
	{
		s = ft_lstcreate(ft_atoi(argv[index]));
		argv = ft_lstadd_back(a, s);
		index++;
	}
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	verify(argc, argv);
	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	*a = NULL;
	*b = NULL;
	init_stacks(a, argv, argc);
	create_index(a);
}
