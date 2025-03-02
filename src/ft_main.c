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
	t_stack	*stack_b;

	stack_a = ft_lstnew(1);
	push(&stack_a, 200);
	push(&stack_a, 30);

	ft_print_stack(stack_a);
	ft_printf("stack a\n\n");

	ft_printf("peak element value : %d\n\n", peak(stack_a));
	ft_printf("popped value : %d\n\n", pop(&stack_a));
	ft_print_stack(stack_a);
	ft_printf("stack a\n\n");

	ft_printf("peak element value : %d\n\n", peak(stack_a));

	push(&stack_a, -5);
	ft_printf("pushed to stack : -5\n\n");
	ft_print_stack(stack_a);
	ft_printf("stack a\n\n");

	stack_b = NULL;
	ft_print_stack(stack_b);
	ft_printf("stack b\n\n");

	ft_lstclear(&stack_a);

	return (0);
}
