/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2345.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:18:54 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/11 15:01:17 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*swap the first 2 elements at the top of stack a.
 Do nothing if there is only one or no elements).
 
rotate a - shift up all elements of stack a by 1.
 The first element becomes the last one.
 
push a - take the first element at the top of b 
and put it at the top of a. Do nothing if b is empty.

reverse rotate a - shift down all elements of stack a by 1. 
The last element becomes the first one.*/

/*si 2 chiffres
*/

void	sort_2(t_stack *pile)
{
	swap(pile);
}

void	sort_3(t_stack *pile_origin, t_stack *pile_for_tri)
{
	
}