/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:42:14 by armarake          #+#    #+#             */
/*   Updated: 2025/03/03 16:33:37 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static int	rotate(t_stack **top)
{
	t_stack	*tail;
	t_stack	*temp_head;

	if (ft_lstsize(*top) < 2)
		return (0);
	temp_head = *top;
	tail = ft_lstlast(*top);
	*top = (*top)->next;
	tail->next = temp_head;
	temp_head->next = NULL;
	return (1);
}

void	rotate_a(t_stack **top)
{
	if (!rotate(top))
		return ;
	ft_putendl_fd("ra", 1);
}

void	rotate_b(t_stack **top)
{
	if (!rotate(top))
		return ;
	ft_putendl_fd("rb", 1);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}
