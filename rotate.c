
#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	last = stack;
	tmp = stack;
	if (list_size(stack) < 2)
		return (-1);
	while (last && last->nxt)
	{
		last = last->nxt;
	}
	stack = tmp->nxt;
	tmp->nxt = NULL;
	last->nxt = tmp;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_putendl_fd("rr", 1);
		return (0);
	}
	return (-1);
}