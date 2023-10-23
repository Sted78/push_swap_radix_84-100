/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2345.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:01:49 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 17:35:31 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack **pilea)
{
	if (stack_is_sorted(pilea))
		return ;
	sa(pilea);
}

void	sort_3(t_stack **pilea)
{
	if (stack_is_sorted(pilea))
		return ;
	if ((*pilea)->val < (*pilea)->next->val
		&& (*pilea)->next->val > (*pilea)->next->next->val
		&& (*pilea)->val < (*pilea)->next->next->val)
		sa_rra(pilea);
	else if ((*pilea)->val > (*pilea)->next->val
		&& (*pilea)->val < (*pilea)->next->next->val
		&& (*pilea)->next->val < (*pilea)->next->next->val)
		sa(pilea);
	else if ((*pilea)->val < (*pilea)->next->val
		&& (*pilea)->val > (*pilea)->next->next->val
		&& (*pilea)->next->val > (*pilea)->next->next->val)
		rra(pilea);
	else if ((*pilea)->val > (*pilea)->next->val
		&& (*pilea)->val > (*pilea)->next->next->val
		&& (*pilea)->next->val < (*pilea)->next->next->val)
		ra(pilea);
	else if ((*pilea)->val > (*pilea)->next->val
		&& (*pilea)->next->val > (*pilea)->next->next->val
		&& (*pilea)->val > (*pilea)->next->next->val)
		ra_sa(pilea);
}

void	sort_4(t_stack **pilea, t_stack **pileb)
{
	int		i;

	if (stack_is_sorted(pilea))
		return ;
	i = min_index(pilea);
	if (i == 1)
		sa(pilea);
	else if (i == 2)
	{
		ra(pilea);
		ra(pilea);
	}
	else if (i == 3)
		rra(pilea);
	if (stack_is_sorted(pilea))
		return ;
	pb(pilea, pileb);
	sort_3(pilea);
	pa(pilea, pileb);
}

void	sort_5(t_stack **pilea, t_stack **pileb)
{
	int		i;

	if (stack_is_sorted(pilea))
		return ;
	i = min_index(pilea);
	if (i == 1)
		sa(pilea);
	else if (i == 2)
	{
		ra(pilea);
		ra(pilea);
	}
	else if (i == 3)
	{
		rra(pilea);
		rra(pilea);
	}
	else if (i == 4)
		rra(pilea);
	if (stack_is_sorted(pilea))
		return ;
	pb(pilea, pileb);
	sort_4(pilea, pileb);
	pa(pilea, pileb);
}
