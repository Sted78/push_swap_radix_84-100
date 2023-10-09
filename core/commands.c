/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:58:30 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/09 16:54:37 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*sa (swap a) swap les 2 1er de a
sb (swap b) swap les 2 1er de b
ss sa et sb en meme temps
pa (push a) prend le 1er de b et le met sur a
pb (push b) prend le 1er de a et le met sur b
ra (rotate a) le 1er de a devient le dernier
rb (rotate b) le 1er de b devient le dernier
rr ra et rb en meme temps
rra (reverse rotate a) le dernier de a devient le 1er
rrb (reverse rotate b) le dernier de b devient le 1er
rrr rra et rrb en meme temps*/

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

t_stack	*	reverse_rotate(t_stack *pile)
{
	//t_stack	*tmp;
	t_stack	*last;
	
	if (!pile)
		return (NULL);
	//tmp = stack_last(pile);//le dernier
	
	stack_add_front(&pile, stack_last(pile));
	last = stack_last(pile);
	last->next = NULL;
	return (pile);	
}
