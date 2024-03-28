/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 07:30:43 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/28 13:16:54 by ymometto         ###   ########.fr       */
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
void	init_stacks(t_list **a, char **argv);
void	lstadd_back(t_list **lst, t_list *nw);
void	verify(int argc, char **argv);
void	error_message(char *msg);
void	create_index(t_list *a);
int		list_size(t_list *stack);
int		*order_arr(t_list *stack);
int		*sort_arr(int *arr, int size);
int		ft_isnbr(char *nbr);
int		ft_cmp(int tmp, char **args, int index);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
t_list	*ft_lstcreate(int value);
#endif
