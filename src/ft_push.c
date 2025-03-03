/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:13:51 by armarake          #+#    #+#             */
/*   Updated: 2025/03/03 15:46:05 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static int	push_from_to(t_stack **from, t_stack **to)
{
	if (is_empty(*from))
		return (0);
	push(to, pop(from));
	return (1);
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	if (!push_from_to(stack_b, stack_a))
		return ;
	ft_putendl_fd("pa", 1);
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	if (!push_from_to(stack_a, stack_b))
		return ;
	ft_putendl_fd("pb", 1);
}
