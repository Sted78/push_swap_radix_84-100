/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2345.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:01:49 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/14 20:40:07 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack *pile)
{
	if (stack_is_sorted(pile))
		return ;
	swap(pile);
}

void	sort_3(t_stack *pileA)
{
	//123
	if (stack_is_sorted(pileA))
		return ;
	//132
	if (pileA->val < pileA->next->val
			&& pileA->next->val > pileA->next->next->val)
	{
		sa(&pileA);
		ra(&pileA);		
	}
	//213
	else if (pileA->val > pileA->next->val
			&& pileA->next->val < pileA->next->next->val)
	{
		sa(&pileA);
	}
	//231
	else if (pileA->val < pileA->next->val
			&& pileA->next->val < pileA->next->next->val)
	{
		rra(&pileA);
	}
	//312
	else if(pileA->val  > pileA->next->val
			&& pileA->next->val < pileA->next->next->val)
	{
		ra(&pileA);
	}
	//321
	else if (pileA->val > pileA->next->val
			&& pileA->next->val > pileA->next->next->val)
	{
		sa(&pileA);
		rra(&pileA);
	}
}

void	sort_4(t_stack *pileA, t_stack *pileB)
{
	int		i;
	
	if (stack_is_sorted(pileA))
		return ;
	
	i = min_index(pileA);	
	if (i == 1)
		ra(&pileA);
	else if (i == 2)
	{
		rra(&pileA);
		rra(&pileA);		
	}
	else if (i == 3)
		rra(&pileA);
	pb(&pileA, &pileB);
	sort_3(pileA);
	pa(&pileA, &pileB);
}

void	sort_5(t_stack *pileA, t_stack *pileB)
{
	int		i;

	if (stack_is_sorted(pileA))
		return ;
	i = min_index(pileA);
	if (i == 1)
		sa(&pileA);
	else if (i == 2)
	{
		ra(&pileA);
		ra(&pileA);
	}
	else if (i == 3)
	{
		rra(&pileA);
		rra(&pileA);
	}
	else if (i == 4)
		rra(&pileA);
	pb(&pileA, &pileB);		
	sort_4(pileA, pileB);
	pa(&pileA, &pileB);
}


