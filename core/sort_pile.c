/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:01:33 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/14 20:37:45 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	stack_is_sorted(t_stack *stack)
{
	
	while (stack)
	{
		if (stack->next && stack->next->val < stack->val)
			return (0);
		stack = stack->next;
	}
	return (1);

}

int	stack_min(t_stack *pile)
{
	int	min;

	min = pile->val;
	while (pile)
	{
		if (pile->val < min)
			min = pile->val;
		pile = pile->next;
	}
	return (min);
}
int	stack_max(t_stack *pile)
{
	int	max;

	max = pile->val;
	while (pile)
	{
		if (pile->val > max)
			max = pile->val;
		pile = pile->next;
	}
	return (max);
}


void	sort_big_pile(t_stack **pileA, t_stack **pileB)
{
	int		min;
	//int		max;
	int		i;
	t_stack	*tmp;

	if (stack_is_sorted(*pileA))
		return ;
	min = stack_min(*pileA);
	//max = stack_max(*pileA);
	i = 0;
	tmp = *pileA;
	while (tmp->val != min)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= stack_size(*pileA) / 2)
	{
		while ((*pileA)->val != min)
			ra(pileA);
	}
	else
	{
		while ((*pileA)->val != min)
			rra(pileA);
	}
	pb(pileA, pileB);
	sort_piles(pileA, pileB);
	pa(pileA, pileB);
}

void	sort_piles(t_stack **pileA, t_stack **pileB)
{
	if (stack_is_sorted(*pileA))
		return ;
	if (stack_size(*pileA) == 2)
		sort_2(*pileA);
	else if (stack_size(*pileA) == 3)
		sort_3(*pileA);
	else if (stack_size(*pileA) == 4)
		sort_4(*pileA, *pileB);
	else if (stack_size(*pileA) == 5)
		sort_5(*pileA, *pileB);
	else
		sort_big_pile(pileA, pileB);
}

int	min_index(t_stack *pile)
{
	int		min;
	int		i;
	t_stack	*tmp;

	min = stack_min(pile);
	i = 0;
	tmp = pile;
	while (tmp->val != min)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}





