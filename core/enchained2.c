/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enchained2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:32:22 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/10 19:59:53 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_print(t_stack *stack)
{
	printf("stack = ");
	
	while (stack)
	{
		printf("%i, ", stack->val);
		stack = stack->next;
	}
	printf("\n");
}

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

 
t_stack	*create_stack_a(int ac, char **av, int startindex)
{
	int	i;
	t_stack	*stack;
					
	i = startindex;
	stack = NULL;
	while (i < ac)
	{
		stack_add_back(&stack, stack_new(ft_atoi(av[i])));
		i++;
	}
	return (stack);
}

/*t_stack	*stack_elem_previous(t_stack *pile, t_stack *elem)
{
	t_stack	*before_last;
	t_stack	*last;
		
	last = elem;
	if (!pile || !last)
		return (NULL);

	while (pile->next->next)
	{
		pile = pile->next;
		
	}	
	before_last = pile;
	return (before_last);		
}*/

t_stack	*stack_elem_previous(t_stack *pile, t_stack *elem)
{
	t_stack	*before_last;
	t_stack	*last;
	
	last = elem;
	if (!pile || !last)
		return (NULL);
	while (pile->next)
	{
		before_last = pile;
		if (pile == last)
			break;
		pile = pile->next;
	}
	return (before_last);
}