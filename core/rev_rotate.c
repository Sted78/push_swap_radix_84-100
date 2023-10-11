/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:39:38 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/11 12:39:44 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*	reverse_rotate(t_stack *pile)
{
	t_stack	*last;
	t_stack	*new_last;
	t_stack	*before_last;
	
	if (!pile || !pile->next)
		return (NULL);
	last = stack_last(pile);
	before_last = stack_elem_previous(pile, last);
	before_last->next = NULL;
	last->next = pile;
	pile = last;
	new_last = stack_last(pile);
	new_last->next = NULL;
	return (pile);	
}

void	rra(t_stack **pilea)
{
	*pilea = reverse_rotate(*pilea);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **pileb)
{
	*pileb = reverse_rotate(*pileb);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **pilea, t_stack **pileb)
{
	*pilea = reverse_rotate(*pilea);
	*pileb = reverse_rotate(*pileb);
	write(1, "rrr\n", 4);
}