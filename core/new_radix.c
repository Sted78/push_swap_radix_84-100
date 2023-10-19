/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_radix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:18:51 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/19 10:18:42 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*t_stack		*get_next_min(t_stack *pile)
{
	t_stack	*tmp;
	t_stack	*min;
	int	has_min;

	tmp = pile;
	has_min = 0;
	min = NULL;
	while (tmp)
	{
		if ((tmp->index == -1) && (has_min == 0
				|| tmp->val < min->val))
		{
			min = tmp;
			has_min = 1;
		}
		tmp = tmp->next;
	}
	return (min);
}

void		set_index(t_stack *pile)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = get_next_min(pile);
	while (tmp)
	{
		tmp->index = i++;
		tmp = get_next_min(pile);
	}
}

void		radix_sort(t_stack *pilea, t_stack *pileb)
{
	int		i;
	t_stack	*tmp;
	int		size;
	int		j;

	i = 0;
	size = stack_size(pilea);
	while (stack_is_sorted(pilea) == 0)
	{
		set_index(pilea);
		while (i < size)
		{
			tmp = pilea;
			j = 0;
			while (j < size)
			{
				if ((tmp->index >> i & 1) == 1)
					ra(&pilea);
				else
					pb(&pilea, &pileb);
				j++;
			}
			while (pileb)
				pa(&pilea, &pileb);
			i++;
		}
	}
}*/