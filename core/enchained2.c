/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enchained2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:32:22 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/20 12:30:28 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*---------------------fonction a supprimer---------------------------------*/
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

void	index_print(t_stack *stack)
{
	printf("index = ");
	
	while (stack)
	{
		printf("%i, ", stack->index);
		stack = stack->next;
	}
	printf("\n");
}

void	binary_print(t_stack *stack)
{
	printf("binary = ");
	
	while (stack)
	{
		printf("%d, ", stack->binary);
		stack = stack->next;
	}
	printf("\n");
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
	printf("ac=%d\n", ac);
	if (ac==2)
		ft_free_tab_strs(av);
	return (stack);
}

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

void	free_stack(t_stack *stack)
{
	printf("AAAAAAAAAAAAAAAa\n");
	(void) stack;
	
	t_stack	*tmp;
	t_stack	*tmp_next;
	
	if(!stack)
		return;
	tmp = stack;
	
	
	while (tmp)
	{
		tmp_next = tmp->next;
		free(tmp);
		tmp = tmp_next;
	}
	

	//free(stack);
}
/*
void	free_stackcccccccccc(t_stack **stack)
{
	t_stack	*tmp;
	
	if(!stack)
		return;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	//free(stack);
}
*/