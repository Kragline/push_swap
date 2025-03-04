/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:35:15 by armarake          #+#    #+#             */
/*   Updated: 2025/03/04 17:54:51 by armarake         ###   ########.fr       */
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

static int	ft_atolli(t_stack **stack, char *arg, int argc, char *args[])
{
	long long int	res;
	int				sign;

	sign = 1;
	res = 0;
	while (*arg && (*arg == 32 || (*arg >= 9 && *arg <= 13)))
		arg++;
	if (*arg == '-')
	{
		sign *= -1;
		arg++;
	}
	else if (*arg == '+')
		arg++;
	while (*arg && (*arg >= '0' && *arg <= '9'))
	{
		res = res * 10 + (*arg - '0');
		arg++;
	}
	if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
		ft_error(stack, argc, args);
	return ((int)(res * sign));
}

static int	is_all_number(char *arg)
{
	while (*arg)
	{	
		if (!ft_isdigit(*arg) && !(*arg == '+' || *arg == '-'))
			return (0);
		arg++;
	}
	return (1);
}

int	arg_is_valid(t_stack **stack, char *arg, int argc, char *args[])
{
	int		nbr;
	int		count_of_nbr;
	t_stack	*temp;

	if (!is_all_number(arg))
		ft_error(stack, argc, args);
	nbr = ft_atolli(stack, arg, argc, args);
	count_of_nbr = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->content == nbr)
			count_of_nbr++;
		temp = temp->next;
	}
	if (count_of_nbr > 0)
		return (0);
	return (1);
}

void	ft_error(t_stack **stack, int argc, char *args[])
{
	if (argc == 2)
		ft_free_tab(args);
	ft_lstclear(stack);
	ft_putendl_fd("Error", 2);
	exit(1);
}
