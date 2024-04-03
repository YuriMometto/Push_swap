#include "push_swap.h"

int     get_min(t_list **stack_a, int val)
{
        t_list  *tmp;
        int             min;

        tmp = *stack_a;
        min = tmp->index;
        while (tmp->nxt)
        {
                tmp = tmp->nxt;
                if (tmp->index < min && tmp->index != val)
                        min = tmp->index;
        }
        return (min);
}

void    sort_three(t_list **stack_a)
{
        t_list  *tmp;
        int             min;
        int             next_min;

        tmp = *stack_a;
        min = get_min(stack_a, -1);
        next_min = get_min(stack_a, min);
        if (tmp->index == min && tmp->nxt->index != next_min)
                ra_sa_rra(stack_a);
        else if (tmp->index == next_min)
        {
                if (tmp->nxt->index == min)
                        sa(stack_a);
                else
                        rra(stack_a);
        }
        else
        {
                if (tmp->nxt->index == min)
                        ra(stack_a);
                else
                        sa_rra(stack_a);
        }
}

void    simple_sort(t_list **stack_a, t_list **stack_b)
{
        t_list  *tmp;
        int             size;

        tmp = *stack_a;
        if (is_sorted(stack_a) || list_size(tmp) < 2)
                return ;
        size = list_size(tmp);
        if (size == 2)
                sa(stack_a);
        else if (size == 3)
                sort_three(stack_a);
        else if (size == 4)
                sort_four(stack_a, stack_b);
        else
                sort_five(stack_a, stack_b);
}

void    stack_sorter(t_list **stack_a, t_list **stack_b)
{
        t_list  *tmp;
		int		index;

        tmp = *stack_a;
		index = 0;
		if (list_size(tmp) <= 5)
			simple_sort(stack_a, stack_b);
        else
			radix_sort(stack_a, stack_b, index);
}
