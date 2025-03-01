/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:01:02 by armarake          #+#    #+#             */
/*   Updated: 2025/03/01 14:53:01 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = ft_lstnew(10);
	push(&stack_a, 20);
	push(&stack_a, 30);

	ft_print_stack(stack_a);
	ft_printf("stack a\n\n");

	ft_printf("peak element value : %d\n\n", peak(stack_a));
	ft_printf("popped value : %d\n\n", pop(&stack_a));
	ft_print_stack(stack_a);
	ft_printf("stack a\n\n");

	ft_printf("peak element value : %d\n\n", peak(stack_a));
	ft_printf("popped value : %d\n\n", pop(&stack_a));
	ft_print_stack(stack_a);
	ft_printf("stack a\n\n");

	ft_printf("peak element value : %d\n\n", peak(stack_a));

	return (0);
}
