/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:57:51 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 14:07:58 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_undefined_index(t_stack *pile)
{
	t_stack	*tmp;

	tmp = pile;
	while (tmp)
	{
		if (tmp->index == 0)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

t_stack	*ft_get_first_elem_without_index(t_stack *pile)
{
	t_stack	*tmp;

	tmp = pile;
	while (tmp)
	{
		if (tmp->index == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack	*biggest_undefined_index(t_stack *pile)
{
	t_stack	*tmp;
	t_stack	*max;

	max = ft_get_first_elem_without_index(pile);
	tmp = pile;
	while (tmp)
	{
		if (tmp->val > max->val && (tmp->index == 0))
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

void	set_all_index_to_zero(t_stack *pile)
{
	t_stack	*tmp;

	tmp = pile;
	while (tmp)
	{
		tmp->index = 0;
		tmp = tmp->next;
	}
}

void	set_index_pile(t_stack *pile)
{
	int		i;
	t_stack	*min;

	i = 1;
	set_all_index_to_zero(pile);
	while (find_undefined_index(pile) == 1)
	{
		min = biggest_undefined_index(pile);
		min->index = i;
		i++;
	}
}
