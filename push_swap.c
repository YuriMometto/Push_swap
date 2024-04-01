/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:54:09 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/28 17:29:22 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(char *msg)
{
	ft_putendl_fd(msg, 1);
}

void	verify(int argc, char **argv)
{
	int		index;
	long	tmp;
	char	**args;

	index = 1;
	args = argv;
	while (args[index])
	{
		tmp = ft_atoi(args[index]);
		if (tmp < -2147483648 || tmp > 2147483647)
			error_message("Error");
		if (ft_cmp(tmp, args, index))
			error_message("Error");
		if (!ft_isnbr(args[index]))
			error_message("Error");
		index++;
	}
	if (argc == 2)
		ft_free(args);
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

void	init_stacks(t_list **a, char **argv)
{
	t_list	*s;
	int		index;

	index = 0;
	while (argv[index])
	{
		s = ft_lstcreate(ft_atoi(argv[index]));
		lstadd_back(a, s);
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
	init_stacks(a, argv);
	create_index(*a);
	if (!is_sorted(a))
	{
		ft_free_stack(a);
		ft_free_stack(b);
		return (0);
	}
	stack_sorter(stack_a, stack_b);
	ft_free_stack(a);
	ft_free_stack(b);
}
