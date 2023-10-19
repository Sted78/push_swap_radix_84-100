/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:01:33 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/19 22:02:27 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	binary_max_digits(t_stack *pilea)
{
 	int	max;
	int	nbr;
	int	nbr_digits;
	t_stack	*tmp;
	
	max = stack_max(pilea);
	tmp = pilea;
	while (tmp)
	{
		if (tmp->val == max)
			break ;
		tmp = tmp->next;
	}
	nbr = tmp->binary;
	nbr_digits = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		nbr_digits++;
	}
	return (nbr_digits);
}

int	ieme_bis(int nbr, int i)
{
	int	shifted;

	shifted = nbr >> (i - 1);
	return (shifted & 1);
}

int	ieme_digit_of_an_int(int nbr, int i, int max)
{
	int	nbr_digits;
	int	digit;
	
	nbr_digits = max - i + 1;
	while (nbr_digits > 0)
	{
		digit = nbr % 10;
		nbr = nbr / 10;
		nbr_digits--;
	}
//	printf("digit = %i\n", digit);
	return (digit);
}

void	radix_sort(t_stack *pilea, t_stack *pileb)
{
//	printf("radix_sort\n");
	int	curseur;
	t_stack	*tmp;
	int	turns;
	int	max;
	int	size;
	
	//stack_print(pilea);
	size = stack_size(pilea);
//	printf("size = %i\n", size);
	curseur = binary_max_digits(pilea);
	max = curseur;
//	printf("curseur = %i\n", curseur);
	while (pilea)
		pb(&pilea, &pileb);
	while (curseur > 0)
	{
		turns = size;
		while (turns > 0)
		{
			tmp = pileb;
			if (tmp == NULL)
				break ;
		//	printf("turns = %i\n", turns);
		//	printf("tmp->binary = %i\n", tmp->binary);
			if (ieme_digit_of_an_int(tmp->binary, curseur, max) == 1)
				pa(&pilea, &pileb);
			else
				rb(&pileb);
			
			turns--;
		//	printf("turnsB = %i\n", turns);
		}
		while (pilea)
			pb(&pilea, &pileb);
		curseur--;
	}
	while (pileb)
		pa(&pilea, &pileb);
	//printf("\n\n");
	//stack_print(pilea);
}	