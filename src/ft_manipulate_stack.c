/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manipulate_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:14:27 by armarake          #+#    #+#             */
/*   Updated: 2025/03/01 14:50:22 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

int	is_empty(t_stack *top)
{
	return (top == NULL);
}

void	push(t_stack **top, int content)
{
	t_stack	*new_node;

	new_node = ft_lstnew(content);
	if (!new_node)
		return ;
	ft_lstadd_front(top, new_node);
}

int	pop(t_stack **top)
{
	t_stack	*temp;
	int		popped_value;

	if (is_empty(*top))
		return (0);
	temp = *top;
	popped_value = temp->content;
	*top = temp->next;
	free(temp);
	return (popped_value);
}

int peak(t_stack *top)
{
	if (is_empty(top))
		return (0);
	return (top->content);
}
