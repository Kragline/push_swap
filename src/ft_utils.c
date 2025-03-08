/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:20:57 by armarake          #+#    #+#             */
/*   Updated: 2025/03/08 17:27:24 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

void	ft_free_tab(char **tab)
{
	int	i;

	if (!*tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_error(t_stack **stack, int argc, char *args[])
{
	if (argc == 2)
		ft_free_tab(args);
	ft_lstclear(stack);
	ft_putendl_fd("Error", 2);
	exit(1);
}

int	ft_sqrt(int content)
{
	int	left;
	int	right;
	int	mid;
	int	result;

	if (content < 0)
		return (-1);
	if (content == 0 || content == 1)
		return (content);
	left = 1;
	right = content;
	result = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid <= content / mid)
		{
			result = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (result);
}

static int	max_content(t_stack *stack)
{
	int	maximum;

	maximum = stack->content;
	while (stack)
	{
		if (stack->content > maximum)
			maximum = stack->content;
		stack = stack->next;
	}
	return (maximum);
}

int	max_position(t_stack *stack)
{
	int	max_pos;
	int	maximum;

	max_pos = 0;
	maximum = max_content(stack);
	while (stack)
	{
		if (stack->content == maximum)
			return (max_pos);
		max_pos++;
		stack = stack->next;
	}
	return (-1);
}
