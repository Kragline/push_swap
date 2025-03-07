/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:01:02 by armarake          #+#    #+#             */
/*   Updated: 2025/03/08 02:42:49 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static void	give_indexes(t_stack *stack)
{
	int		index;
	t_stack	*current;
	t_stack	*temp_head;

	temp_head = stack;
	while (stack)
	{
		current = temp_head;
		index = 0;
		while (current)
		{
			if (stack->content > current->content)
				index++;
			current = current->next;
		}
		stack->index = index;
		stack = stack->next;
	}
}

static void	initialize_stack(t_stack **stack, int argc, char *argv[])
{
	int		i;
	char	**args;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		args = argv;
		i = 1;
	}
	while (args[i])
	{
		if (!arg_is_valid(stack, args[i], argc, args))
			ft_error(stack, argc, args);
		push_back(stack, ft_atoi(args[i]));
		i++;
	}
	give_indexes(*stack);
	if (argc == 2)
		ft_free_tab(args);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	initialize_stack(&stack_a, argc, argv);
	if (!is_sorted(stack_a))
		sort_stack(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
