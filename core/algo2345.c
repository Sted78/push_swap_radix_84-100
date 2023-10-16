/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2345.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:01:49 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/16 11:52:53 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack *pile)
{
	if (stack_is_sorted(pile))
		return ;
	swap(pile);
}

void	sort_3(t_stack *pilea)
{
	//123
	if (stack_is_sorted(pilea))
		return ;
	//132
	if (pilea->val < pilea->next->val
			&& pilea->next->val > pilea->next->next->val)
	{
		sa(&pilea);
		ra(&pilea);		
	}
	//213
	else if (pilea->val > pilea->next->val
			&& pilea->next->val < pilea->next->next->val)
	{
		sa(&pilea);
	}
	//231
	else if (pilea->val < pilea->next->val
			&& pilea->next->val < pilea->next->next->val)
	{
		rra(&pilea);
	}
	//312
	else if(pilea->val  > pilea->next->val
			&& pilea->next->val < pilea->next->next->val)
	{
		ra(&pilea);
	}
	//321
	else if (pilea->val > pilea->next->val
			&& pilea->next->val > pilea->next->next->val)
	{
		sa(&pilea);
		rra(&pilea);
	}
}

void	sort_4(t_stack *pilea, t_stack *pileb)
{
	int		i;
	
	if (stack_is_sorted(pilea))
		return ;
	
	i = min_index(pilea);	
	if (i == 1)
		ra(&pilea);
	else if (i == 2)
	{
		rra(&pilea);
		rra(&pilea);		
	}
	else if (i == 3)
		rra(&pilea);
	pb(&pilea, &pileb);
	sort_3(pilea);
	pa(&pilea, &pileb);
}

void	sort_5(t_stack *pilea, t_stack *pileb)
{
	int		i;

	if (stack_is_sorted(pilea))
		return ;
	i = min_index(pilea);
	if (i == 1)
		sa(&pilea);
	else if (i == 2)
	{
		ra(&pilea);
		ra(&pilea);
	}
	else if (i == 3)
	{
		rra(&pilea);
		rra(&pilea);
	}
	else if (i == 4)
		rra(&pilea);
	pb(&pilea, &pileb);		
	sort_4(pilea, pileb);
	pa(&pilea, &pileb);
}


