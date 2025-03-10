/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:01:38 by armarake          #+#    #+#             */
/*   Updated: 2025/03/10 15:03:48 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

int	is_sorted(t_stack *stack)
{
	if (is_empty(stack))
		return (0);
	while (stack)
	{
		if (stack->next && stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	make_butterfly(t_stack **stack_a, t_stack **stack_b)
{
	int	offset;
	int	counter;

	counter = 0;
	offset = ft_sqrt(ft_lstsize(*stack_a));
	while (*stack_a)
	{
		if ((*stack_a)->index <= counter)
		{
			push_b(stack_a, stack_b, 1);
			rotate_b(stack_b, 1);
			counter++;
		}
		else if ((*stack_a)->index <= counter + offset)
		{
			push_b(stack_a, stack_b, 1);
			counter++;
		}
		else
			rotate_a(stack_a, 1);
	}
}

static int	update(t_stack **stack_a, t_stack **stack_b)
{
	push_a(stack_a, stack_b, 1);
	return (ft_lstsize(*stack_b));
}

static void	final_push(t_stack **stack_a, t_stack **stack_b)
{
	int	max_pos;
	int	stack_len;

	stack_len = ft_lstsize(*stack_b);
	while (*stack_b)
	{
		max_pos = max_position(*stack_b);
		if (max_pos <= (stack_len / 2))
		{
			while (max_pos != 0)
			{
				rotate_b(stack_b, 1);
				max_pos = max_position(*stack_b);
			}
		}
		else
		{
			while (max_pos != 0)
			{
				reverse_rotate_b(stack_b, 1);
				max_pos = max_position(*stack_b);
			}
		}
		stack_len = update(stack_a, stack_b);
	}
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	make_butterfly(stack_a, stack_b);
	final_push(stack_a, stack_b);
}
