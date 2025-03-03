/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:01:02 by armarake          #+#    #+#             */
/*   Updated: 2025/03/03 17:14:23 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

int	main(void)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = ft_lstnew(1);
	push(&stack_a, 200);
	push(&stack_a, 30);
	ft_print_stack(stack_a, 'a');

	stack_b = ft_lstnew(55);
	push(&stack_b, 40);
	ft_print_stack(stack_b, 'b');

	reverse_rotate_a(&stack_a);
	ft_print_stack(stack_a, 'a');

	reverse_rotate_ab(&stack_a, &stack_b);
	ft_print_stack(stack_a, 'a');
	ft_print_stack(stack_b, 'b');

	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);

	return (0);
}
