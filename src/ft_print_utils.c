/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:24:35 by armarake          #+#    #+#             */
/*   Updated: 2025/03/08 01:02:48 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

static int	ft_num_len(int content)
{
	int	len;

	len = 0;
	if (content < 0)
	{
		content *= -1;
		len++;
	}
	while (content)
	{
		content /= 10;
		len++;
	}
	return (len);
}

static int	ft_max_len(t_stack *top)
{
	int	max_len;
	int	content_len;

	max_len = ft_num_len(top->content);
	top = top->next;
	while (top)
	{
		content_len = ft_num_len(top->content);
		if (content_len > max_len)
			max_len = content_len;
		top = top->next;
	}
	return (max_len);
}

static void	ft_print_bottom(int max_len)
{
	int	i;

	i = 0;
	ft_printf("--");
	while (i < max_len)
	{
		ft_printf("-");
		i++;
	}
	ft_printf("--\n");
}

static void	ft_print_right_wall(int max_len, int content)
{
	int	i;
	int	n;
	int	content_len;

	i = 0;
	content_len = ft_num_len(content);
	n = max_len - content_len;
	while (i < n)
	{
		ft_printf(" ");
		i++;
	}
	ft_printf(" |\n");
}

void	ft_print_stack(t_stack *top, char name)
{
	int	max_len;

	if (!top)
	{
		ft_printf("|   |\n-----\n");
		ft_printf("stack %c\n\n", name);
		return ;
	}
	max_len = ft_max_len(top);
	while (top)
	{
		ft_printf("| %d (%d)", top->content, top->index);
		ft_print_right_wall(max_len, top->content);
		top = top->next;
	}
	ft_print_bottom(max_len);
	ft_printf("stack %c\n\n", name);
}
