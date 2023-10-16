/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_pile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:50:39 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/16 16:52:49 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_index_in_pile(t_stack **pile)
{
	t_stack	*tmp;
	int		i;

	if (stack_is_sorted(*pile))
		return ;
	tmp = *pile;
	i = min_index(*pile);
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

int		min_index(t_stack *pile)
{
	int	min;

	min = pile->index;
	while (pile)
	{
		if (pile->index < min)
			min = pile->index;
		pile = pile->next;
	}
	return (min);
}

void	radix(t_stack **pilea, t_stack **pileb)
{
	t_stack	*head_a;
	int		i;
	int		j;
	int		size;

	i = 0;
	size = stack_size(*pilea);
	while (!stack_is_sorted(*pilea))
	{
		j = 0;
		while (j < size)
		{
			head_a = *pilea;
			if (head_a->index & (1 << i))
				ra(pilea);
			else
				pb(pilea, pileb);
		}
		
	while (stack_size(*pileb) != 0)
		pa(pilea, pileb);
	i++;
	}
}	
