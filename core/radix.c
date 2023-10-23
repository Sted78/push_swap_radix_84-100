/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:01:33 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 16:38:00 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_binary_index(t_stack *pile)
{
	t_stack	*tmp;

	tmp = pile;
	while (tmp)
	{
		tmp->binary = convert_int_in_binary(tmp->index);
		tmp = tmp->next;
	}
}

int	binary_max_digits(t_stack *pilea)
{
	int		max;
	int		nbr;
	int		nbr_digits;
	t_stack	*tmp;

	max = stack_min(pilea);
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
	return (digit);
}

void	sort_the_diggit(t_stack **pilea, t_stack **pileb, int curseur, int max)
{
	t_stack	*tmp;

	tmp = *pilea;
	if (ieme_digit_of_an_int(tmp->binary, curseur, max) == 1)
		pb(pilea, pileb);
	else
		ra(pilea);
}

void	radix_sort(t_stack **pilea, t_stack **pileb)
{
	int		curseur;
	t_stack	*tmp;
	int		turns;
	int		max;
	int		size;

	size = stack_size(*pilea);
	curseur = binary_max_digits(*pilea);
	max = curseur;
	while (curseur > 0)
	{
		turns = size;
		while (turns > 0)
		{
			tmp = *pilea;
			if (tmp == NULL)
				break ;
			sort_the_diggit(pilea, pileb, curseur, max);
			turns--;
		}
		while (*pileb)
			pa(pilea, pileb);
		curseur--;
	}
}
