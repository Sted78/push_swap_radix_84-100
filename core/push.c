/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:00:13 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/16 11:52:53 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*	push(t_stack **dest, t_stack *src)
{
	t_stack	*first_src;
	t_stack	**new_dest;
	
	if (!src)
		return (NULL);
	if (!dest)
		return (src);
	new_dest = dest;
	first_src = src;
	src = src->next;
	stack_add_front(new_dest, first_src);
	return (src);
}

void	pa(t_stack **pilea, t_stack **pileb)
{
	*pileb = push(pilea, *pileb);
	write(1, "pa\n", 3);
}

void	pb(t_stack **pilea, t_stack **pileb)
{
	*pilea = push(pileb, *pilea);
	write(1, "pb\n", 3);
}
//pa, pb = push a, b
//take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.
