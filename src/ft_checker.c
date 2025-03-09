/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:26:24 by armarake          #+#    #+#             */
/*   Updated: 2025/03/09 18:04:05 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"
#include <string.h>

static int	execute_cmnd(t_stack **stack__a, t_stack **stack__b, char *input)
{
	if (ft_strncmp("rra\n", input, 4) == 0)
		reverse_rotate_a(stack__a, 0);
	else if (ft_strncmp("rrb\n", input, 4) == 0)
		reverse_rotate_b(stack__b, 0);
	else if (ft_strncmp("rrr\n", input, 4) == 0)
		reverse_rotate_ab(stack__a, stack__b, 0);
	else if (ft_strncmp("sa\n", input, 3) == 0)
		swap_a(stack__a, 0);
	else if (ft_strncmp("sb\n", input, 3) == 0)
		swap_b(stack__b, 0);
	else if (ft_strncmp("ss\n", input, 3) == 0)
		swap_ab(stack__a, stack__b, 0);
	else if (ft_strncmp("pa\n", input, 3) == 0)
		push_a(stack__a, stack__b, 0);
	else if (ft_strncmp("pb\n", input, 3) == 0)
		push_b(stack__a, stack__b, 0);
	else if (ft_strncmp("ra\n", input, 3) == 0)
		rotate_a(stack__a, 0);
	else if (ft_strncmp("rb\n", input, 3) == 0)
		rotate_b(stack__b, 0);
	else if (ft_strncmp("rr\n", input, 3) == 0)
		rotate_ab(stack__a, stack__b, 0);
	else
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	return (1);
}

static void	read_input(t_stack **stack__a, t_stack **stack__b)
{
	char	*input;

	while (1)
	{
		input = get_next_line(0);
		if (!input || (*input) == '\n')
		{
			free(input);
			input = NULL;
			return ;
		}
		if (!execute_cmnd(stack__a, stack__b, input))
		{
			free(input);
			input = NULL;
			return ;
		}
		free(input);
		input = NULL;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack__a;
	t_stack	*stack__b;

	if (argc == 1)
		return (0);
	stack__a = NULL;
	stack__b = NULL;
	initialize_stack(&stack__a, argc, argv);
	if (!is_sorted(stack__a))
		read_input(&stack__a, &stack__b);
	if (is_sorted(stack__a) && is_empty(stack__b))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	ft_lstclear(&stack__a);
	ft_lstclear(&stack__b);
	return (0);
}