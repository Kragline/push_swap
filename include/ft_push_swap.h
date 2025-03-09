/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:01:22 by armarake          #+#    #+#             */
/*   Updated: 2025/03/09 16:32:09 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <limits.h>
# include "../libft/libft.h"
# include "../gnl/get_next_line.h"

int		is_empty(t_stack *top);
void	push(t_stack **top, int content, int index);
void	push_back(t_stack **top, int content);
int		pop(t_stack **top);
int		top(t_stack *top);
void	ft_print_stack(t_stack *top, char *name);
void	swap_a(t_stack **top, int print);
void	swap_b(t_stack **top, int print);
void	swap_ab(t_stack **stack_a, t_stack **stack_b, int print);
void	push_a(t_stack **stack_a, t_stack **stack_b, int print);
void	push_b(t_stack **stack_a, t_stack **stack_b, int print);
void	rotate_a(t_stack **top, int print);
void	rotate_b(t_stack **top, int print);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b, int print);
void	reverse_rotate_a(t_stack **top, int print);
void	reverse_rotate_b(t_stack **top, int print);
void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b, int print);
void	ft_free_tab(char **tab);
void	ft_error(t_stack **stack, int argc, char *args[]);
int		ft_sqrt(int content);
int		max_position(t_stack *stack);
int		arg_is_valid(t_stack **stack, char *arg, int argc, char *args[]);
int		is_sorted(t_stack *stack);
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	initialize_stack(t_stack **stack, int argc, char *argv[]);

#endif