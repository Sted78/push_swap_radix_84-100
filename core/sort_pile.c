/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:01:33 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/16 17:47:41 by svanmarc         ###   ########.fr       */
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

void	sort_piles(t_stack **pilea, t_stack **pileb)
{
	if (stack_is_sorted(*pilea))
		return ;
	if (stack_size(*pilea) == 2)
		sort_2(*pilea);
	else if (stack_size(*pilea) == 3)
		sort_3(*pilea);
	else if (stack_size(*pilea) == 4)
		sort_4(*pilea, *pileb);
	else if (stack_size(*pilea) == 5)
		sort_5(*pilea, *pileb);
	else
		radix_sort(pilea, pileb);
}

/*int	min_index(t_stack *pile)
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
}*/





