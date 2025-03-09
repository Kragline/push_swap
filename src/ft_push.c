/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:13:51 by armarake          #+#    #+#             */
/*   Updated: 2025/03/09 17:23:52 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static int	push_from_to(t_stack **from, t_stack **to)
{
	int	index;

	if (is_empty(*from))
		return (0);
	index = (*from)->index;
	push(to, pop(from), index);
	return (1);
}

void	push_a(t_stack **stack_a, t_stack **stack_b, int print)
{
	if (!push_from_to(stack_b, stack_a))
		return ;
	if (print)
		ft_putendl_fd("pa", 1);
}

void	push_b(t_stack **stack_a, t_stack **stack_b, int print)
{
	if (!push_from_to(stack_a, stack_b))
		return ;
	if (print)
		ft_putendl_fd("pb", 1);
}
