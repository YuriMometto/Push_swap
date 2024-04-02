/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 07:30:43 by ymometto          #+#    #+#             */
/*   Updated: 2024/04/02 15:49:41 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*nxt;
}	t_list;

void	ft_free(char **args);
void	init_stacks(t_list **a, int argc, char **argv);
void	lstadd_back(t_list **lst, t_list *nw);
void	verify(int argc, char **argv);
void	error_message(char *msg);
void	create_index(t_list **a);
//ordenation method
void	stack_sorter(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	ft_free_stack(t_list **stack);
//aleatory
void	ra_sa_rra(t_list **stack_a);
void	sa_rra(t_list **stack_a);
//movements
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		push(t_list **stack_from, t_list **stack_to);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
//utils
int		get_distance(t_list **stack, int index);
int		get_min(t_list **stack_a, int val);
int		list_size(t_list *stack);
int		*order_arr(t_list *stack);
int		*sort_arr(int *arr, int size);
int		ft_isnbr(char *nbr);
int		is_sorted(t_list **stack_a);
int		ft_cmp(int tmp, char **args, int index);
t_list	*ft_lstcreate(int value);
t_list	*ft_lstlast(t_list *head);
t_list	*get_next_min(t_list **stack);
#endif
