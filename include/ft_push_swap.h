/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:01:22 by armarake          #+#    #+#             */
/*   Updated: 2025/03/03 16:59:47 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"

int		is_empty(t_stack *top);
void	push(t_stack **top, int content);
int		pop(t_stack **top);
int		peak(t_stack *top);
void	ft_print_stack(t_stack *top, char name);
void	swap_a(t_stack **top);
void	swap_b(t_stack **top);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **top);
void	rotate_b(t_stack **top);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack **top);
void	reverse_rotate_b(t_stack **top);
void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);

#endif