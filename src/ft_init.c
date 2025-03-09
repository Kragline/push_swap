/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:22:15 by armarake          #+#    #+#             */
/*   Updated: 2025/03/09 14:23:01 by armarake         ###   ########.fr       */
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

void	initialize_stack(t_stack **stack, int argc, char *argv[])
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
