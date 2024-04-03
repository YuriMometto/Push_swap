#include "push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	last = *stack;
	if (list_size(last) < 2)
		return (-1);
	while (last && last->nxt)
	{
		last = last->nxt;
	}
	while (tmp)
	{
		if (tmp->nxt->nxt == NULL)
		{
			tmp->nxt = NULL;
			break ;
		}
		tmp = tmp->nxt;
	}
	last->nxt = *stack;
	*stack = last;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_putendl_fd("rrr", 1);
		return (0);
	}
	return (-1);
}
