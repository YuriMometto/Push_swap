#include "push_swap.h"

int	get_max_bits(t_list **stack)
{
	t_list	*tmp;
	int		max;
	int		max_bits;

	tmp = *stack;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->nxt;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int index)
{
	t_list	*tmp_a;
	int		counter;
	int		size;
	int		max_bits;

	tmp_a = *stack_a;
	size = list_size(tmp_a);
	max_bits = get_max_bits(stack_a);
	while (index < max_bits)
	{
		counter = 0;
		while (counter++ < size)
		{
			tmp_a = *stack_a;
			if (((tmp_a->index >> index) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (list_size(*stack_b) != 0)
			pa(stack_a, stack_b);
		index++;
	}
}
