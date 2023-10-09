/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enchained2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:32:22 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/09 16:58:45 by svanmarc         ###   ########.fr       */
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
		printf("ok");
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
	
	/*if (ac == 2)
	{
		printf("qqqqqqqqqqqqq\n");
		new_ac = count_nbrs(av[1], ' ');
		new_av = ft_split(av[1], ' ');
		
		i = 0;
	}*/
	while (i < ac)
	{
		stack_add_back(&stack, stack_new(ft_atoi(av[i])));
		i++;
	}
	return (stack);
}