/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:00:17 by armarake          #+#    #+#             */
/*   Updated: 2025/03/01 00:15:09 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*element;

	element = (t_stack *)malloc(sizeof(t_stack));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
