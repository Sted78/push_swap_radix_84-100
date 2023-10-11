/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:16:51 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/11 12:30:53 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *	rotate(t_stack *pile)
{
	t_stack	*tmp;
	t_stack	*last;
	
	if (!pile)
		return NULL;
	if (stack_size(pile) == 1)
	{
		printf("attention 1 seul element dans la pile, ne devrait pas se produire");
		return NULL;
	}
	tmp = pile;
	last = stack_last(pile);
	last->next = tmp;	
	pile = pile->next;
	tmp->next = NULL;	
	return pile;
}

void	ra(t_stack **pilea)
{
	*pilea = rotate(*pilea);
	write(1, "ra\n", 3);
}

void	rb(t_stack **pileb)
{
	*pileb = rotate(*pileb);
	write(1, "rb\n", 3);
}
void	rr(t_stack **pilea, t_stack **pileb)
{
	*pilea = rotate(*pilea);
	*pileb = rotate(*pileb);
	write(1, "rr\n", 3);
}