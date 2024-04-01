
#include "push_swap.h"

int	swap(t_list	**stack)
{
	t_list	*tmp;

	tmp = stack;
	if (stack && stack->nxt)
	{
		stack = stack->nxt;
		tmp->nxt = stack->nxt;
		stack->nxt = tmp;
		return (0);
	}
	return (-1);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		sa(stack_a);
		sb(stack_b);
		ft_putendl_fd("ss", 1);
		return (0);
	}
	return (-1);
}