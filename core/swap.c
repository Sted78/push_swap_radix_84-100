/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:35:13 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/20 14:03:27 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *swap(t_stack *pile)
{
	t_stack	*first;
	t_stack	*second;

	if (!pile || !pile->next)
		return (NULL);
	first = pile;
	second = pile->next;
	first->next = second->next;
	second->next = first;
	pile = second;
	return (pile);	
}

void	sa(t_stack **pilea)
{
	
	//printf(" 👺  SA1   \n");
	*pilea = swap(*pilea);
	//printf(" 👺  SA2  \n");
	stack_print(*pilea);
	write(1, "sa\n", 3);
	//printf(" 👺  SA3   \n");
}

void	sb(t_stack **pileb)
{
	*pileb = swap(*pileb);
	write(1, "sb\n", 3);
}

void	ss(t_stack **pilea, t_stack **pileb)
{
	*pilea = swap(*pilea);
	*pileb = swap(*pileb);
	write(1, "ss\n", 3);
}
//sa, sb, ss = swap a, b, both
//swap the first 2 elements at the top of the stack