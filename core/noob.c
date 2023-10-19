/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:19:33 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/19 20:27:56 by svanmarc         ###   ########.fr       */
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



t_stack	* ft_get_first_elem_without_index(t_stack *pile)
{
	t_stack	*tmp;

	tmp = pile;
	while (tmp)
	{
		if (tmp->index == 0)
		{
			return tmp;
		}

		tmp = tmp->next;
	}
	return NULL; // si aucun element n'a d'index zero
}


t_stack		*smallest_undefined_index(t_stack *pile)
{
	t_stack	*tmp;
	t_stack	*min;

	min = ft_get_first_elem_without_index(pile);
	
	tmp = pile;
	while (tmp)
	{
		if (tmp->val < min->val  &&  (tmp->index == 0) )
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	set_index_pile(t_stack *pile)
{
	int	i;
	t_stack	*min;
		
	i = 1;
	while (find_undefined_index(pile) == 1)
	{
		min = smallest_undefined_index(pile);
		min->index = i;
		i++;
		
	}
}

void	set_binary_index(t_stack *pile)
{
	t_stack	*tmp;

	tmp = pile;
	while (tmp)
	{
		tmp->binary = convert_int_in_binary(tmp->index);	
		tmp = tmp->next;
	}
}