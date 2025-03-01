/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:24:35 by armarake          #+#    #+#             */
/*   Updated: 2025/03/01 14:43:54 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

void	ft_print_stack(t_stack *top)
{
	if (!top)
	{
		ft_printf("|    |\n------\n");
		return ;
	}
	while (top)
	{
		ft_printf("| %d |\n", top->content);
		top = top->next;
		if (!top)
			ft_printf("------\n");
	}
}
