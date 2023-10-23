/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enchained2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:32:22 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 14:01:55 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*create_stack_a(int ac, char **av, int startindex)
{
	int		i;
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
			break ;
		pile = pile->next;
	}
	return (before_last);
}

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*tmp_next;

	tmp = stack;
	while (tmp)
	{
		tmp_next = tmp->next;
		free(tmp);
		tmp = tmp_next;
	}
}
