/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2345.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:01:49 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/20 14:04:57 by svanmarc         ###   ########.fr       */
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
	printf("😈😈  pilea:          ");
	stack_print(*pilea);
	
	printf("😈😈😈😈😈😈 (*pilea)->val : %d\n" , (*pilea)->val);
	// printf("😈😈😈😈😈😈 (*pilea)->next->val : %d\n" , (*pilea)->next->val);
	// printf("😈😈😈😈😈😈 (*pilea)->next->next->val : %d\n" , (*pilea)->next->next->val);
	//printf("😈  A1\n");
	
	if (stack_is_sorted(pilea))
		return ;
		
	//printf("😈  AAAAAAAAAA\n");
	printf("😈😈😈😈😈😈 (*pilea)->val : %d\n" , (*pilea)->val);
	// printf("😈😈😈😈😈😈 (*pilea)->next->val : %d\n" , (*pilea)->next->val);
	 
	if ((*pilea)->val < (*pilea)->next->val)
	{	
		printf("😈  BBBBBBBBBBBB\n");	
		
	}
	
	if ((*pilea)->val < (*pilea)->next->val
			&& (*pilea)->next->val > (*pilea)->next->next->val
			&& (*pilea)->val < (*pilea)->next->next->val)
			{
			printf("😈  sa_rra\n");	
			sa_rra(pilea);
		}
	else if ((*pilea)->val > (*pilea)->next->val
			&& (*pilea)->val < (*pilea)->next->next->val
			&& (*pilea)->next->val < (*pilea)->next->next->val)

			{
			printf("😈  sa\n");	
			sa(pilea);
		}
	else if ((*pilea)->val < (*pilea)->next->val
			&& (*pilea)->val > (*pilea)->next->next->val
			&& (*pilea)->next->val > (*pilea)->next->next->val)

			{
			printf("😈  rra\n");	
			rra(pilea);
			}		

	else if ((*pilea)->val > (*pilea)->next->val
			&& (*pilea)->val > (*pilea)->next->next->val
			&& (*pilea)->next->val < (*pilea)->next->next->val)

			{
			printf("😈  ra\n");	
		ra(pilea);
		}
	else if ((*pilea)->val > (*pilea)->next->val
			&& (*pilea)->next->val > (*pilea)->next->next->val
			&& (*pilea)->val > (*pilea)->next->next->val)

			{
			printf("😈  ra_sa\n");	
		ra_sa(pilea);	
	}
	else
	{
			printf("😈  else    devrait pas arriver\n");	
		
	}

	printf("😈  D");
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
	pb(pilea, pileb);		
	sort_4(pilea, pileb);
	pa(pilea, pileb);
}


