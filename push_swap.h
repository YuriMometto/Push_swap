/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 07:30:43 by ymometto          #+#    #+#             */
/*   Updated: 2024/03/27 14:43:23 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/includes/libft.h"
# include <stdlib.h>

typedef struct t_list
{
	int				value;
	int				index;
	struct t_list	*nxt;
}	t_list;

void	init_stacks(t_list **a, char **argv, int argc);
void	verify(int argc, char **argv);
void	error_message(t_list *a,char *msg);
void	create_index(t_list *a);
int		*order_arr(t_list *stack);
int		*sort_arr(int *arr, int size);
t_list	*ft_lstcreate(int value);
#endif
