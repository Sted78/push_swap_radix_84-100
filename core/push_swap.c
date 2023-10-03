/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:40:46 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/03 18:35:44 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ************************************************************************** */
/*lire les args
verifier qu'il y a au moins 1 param

que c'est des nombres
max int min int
qu'il n'y a pas de double
...
qu'ils ne sount pas tries

error

si c'est le cas, exit
*/

int	main(int ac, char **av)
{
	if (ac <= 1)
		write (1, "\n", 1);
	else
	{
		if (no_error_in_args(ac, av) == 1)
			ft_putstr("jusqu'ici tout va bien\n");
		// exit failure if error??
		t_stack	*pilea = create_stack_a(ac, av);
		stack_print(pilea);
		if (stack_is_sorted(pilea))
			ft_putstr(" is sorted\n");
		else
			ft_putstr("not sorted\n");
		//si c;est trie \n exit	
			
		}
	}
	return (0);
}