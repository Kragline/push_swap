/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:38:21 by armarake          #+#    #+#             */
/*   Updated: 2025/03/09 16:31:40 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static int	swap(t_stack **top)
{
	int	temp_content;

	if (ft_lstsize(*top) < 2)
		return (0);
	temp_content = (*top)->content;
	(*top)->content = (*top)->next->content;
	(*top)->next->content = temp_content;
	return (1);
}

void	swap_a(t_stack **top, int print)
{
	if (!swap(top))
		return ;
	if (print)
		ft_putendl_fd("sa", 1);
}

void	swap_b(t_stack **top, int print)
{
	if (!swap(top))
		return ;
	if (print)
		ft_putendl_fd("sb", 1);
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b, int print)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return ;
	swap(stack_a);
	swap(stack_b);
	if (print)
		ft_putendl_fd("ss", 1);
}
