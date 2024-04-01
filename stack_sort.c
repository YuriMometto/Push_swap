#include "push_swap.h"

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		size;

	if (is_sorted(stack_a) || list_size(stack_a) < 2)
		return ;
	size = list_size(stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a);
	else
		sort_five(stack_a);
}

void	stack_sorter(t_list **stack_a, t_list **stack_b)
{
	if (list_size(stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
