/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:01:02 by armarake          #+#    #+#             */
/*   Updated: 2025/03/01 00:01:02 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*head;

	head = ft_lstnew(10);
	ft_lstadd_front(&head, ft_lstnew(20));
	ft_lstadd_front(&head, ft_lstnew(30));

	ft_print_stack(head);
}