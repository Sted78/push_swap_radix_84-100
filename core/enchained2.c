/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enchained2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:32:22 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/19 15:48:36 by svanmarc         ###   ########.fr       */
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
	t_stack	*tmp;
	
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}