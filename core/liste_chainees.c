/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste_chainees.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:38:33 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/03 18:31:35 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*create_stack_a(int ac, char **av)
{
	int	i;
	t_stack	*stack;
	
	i = 1;
	stack = NULL;
	while (i < ac)
	{
		stack_add_back(&stack, stack_new(ft_atoll(av[i])));
		i++;
	}
	return (stack);
}

void	stack_add_front(t_stack **stack, t_stack *new)
{
	if(stack && new)
	{
		new->next = *stack;
		*stack = new;		
	}
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (stack && new)
	{
		if (*stack)
		{
			last = stack_last(*stack);
			last->next = new;
		}
		else
			*stack = new;
	}
		
}
int	stack_size(t_stack *stack)
{
	int	size;
	
	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
void	stack_print(t_stack *stack)
{
	printf("stack = ");
	
	while (stack)
	{
		printf("%i, \n", stack->val);
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


t_stack	*stack_last(t_stack *stack)
{
	if(!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*stack_new(int val)
{
	t_stack	*stack;
	
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->val = val;
	stack->next = NULL;
	return (stack);
}