/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:31:02 by armarake          #+#    #+#             */
/*   Updated: 2025/03/03 17:14:12 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static int	reverse_rotate(t_stack **top)
{
	t_stack	*tail_previous;
	t_stack	*temp_head;
	t_stack	*tail;

	if (ft_lstsize(*top) < 2)
		return (0);
	temp_head = *top;
	tail = *top;
	while (tail->next)
	{
		tail_previous = tail;
		tail = tail->next;
	}
	*top = tail;
	(*top)->next = temp_head;
	tail_previous->next = NULL;
	return (1);
}

void	reverse_rotate_a(t_stack **top)
{
	if (!reverse_rotate(top))
		return ;
	ft_putendl_fd("rra", 1);
}

void	reverse_rotate_b(t_stack **top)
{
	if (!reverse_rotate(top))
		return ;
	ft_putendl_fd("rrb", 1);
}

void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
