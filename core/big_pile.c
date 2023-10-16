/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_pile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:50:39 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/16 17:52:18 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_index_in_pile(t_stack **pile)
{
	t_stack	*tmp;
	int		i;

	if (stack_is_sorted(*pile))
		return ;
	tmp = *pile;
	i = min_index(*pile);
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

int		min_index(t_stack *pile)
{
	int	min;

	min = pile->index;
	while (pile)
	{
		if (pile->index < min)
			min = pile->index;
		pile = pile->next;
	}
	return (min);
}

/*int	nbr_of_digits_in_biggest_nbr(t_stack *pile)
{
	int		nbr_of_digits;
	int		biggest_nbr;

	biggest_nbr = stack_max(pile);
	nbr_of_digits = 0;
	while (biggest_nbr)
	{
		biggest_nbr = biggest_nbr / 10;
		nbr_of_digits++;
	}
	return (nbr_of_digits);
}

void	radix_sort(t_stack **pilea, t_stack **pileb)
{
	int		i;
	int		j;
	int		nbr;
	int		nbr_of_digits;

	i = 0;
	nbr_of_digits = nbr_of_digits_in_biggest_nbr(*pilea);
	while (i < nbr_of_digits)
	{
		j = 0;
		while (j < stack_size(*pilea))
		{
			nbr = (*pilea)->val;
			if ((nbr >> i) & 1)
				ra(pilea);
			else
				pb(pilea, pileb);
			j++;
		}
		while (*pileb)
			pa(pilea, pileb);
		i++;
	}
}*/

