/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_piles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:41:48 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/18 23:18:25 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*int	nbr_of_digits_in_binary(int nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	nbr_of_digits_max(t_stack *pile)
{
	int	max;
	int	i;

	max = 0;
	while (pile)
	{
		i = nbr_of_digits_in_binary(pile->index);
		if (i > max)
			max = i;
		pile = pile->next;
	}
	return (max);
}

void	sort_radix(t_stack *pilea, t_stack *pileb)
{
	int	i;
	int	nbr_dig_max;
	int	size;
	
	set_index_and_binary_in_pile(pilea);
	nbr_dig_max = nbr_of_digits_max(pilea);
	i = 0;
	size = stack_size(pilea);
	
	while (nbr_dig_max)
	{
		while (i < size)
		{
			if ((pilea->binary >> (nbr_dig_max - 1) & 1) == 1)
				pb(&pilea, &pileb);
			else
				ra(&pilea);
			i++;
		}
		while (pileb)
			pa(&pilea, &pileb);
		nbr_dig_max--;
	}
}*/	
