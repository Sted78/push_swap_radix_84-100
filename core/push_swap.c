/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:40:46 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/19 21:54:14 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



int	main(int ac, char **av)
{
	int	new_ac;
	char	**new_av;
	int	startindex;
	t_stack	*pilea;
	t_stack *pileb;

	pileb = NULL;		
	if (ac == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	new_ac = ac;
	new_av = av;
	if (ac == 2)
	{		
		new_ac = count_nbrs(av[1], ' ');
		new_av = ft_split(av[1], ' ');
		startindex = 0;
	}
	else
		startindex = 1;
	if (!no_error_in_args(new_ac, new_av, startindex))
	{
		printf("EXIT_FAILURE\n");
		//free(new_av);
		return (EXIT_FAILURE);
	}
	pilea = create_stack_a(new_ac, new_av, startindex);
	//stack_print(pilea);
	set_index_pile(pilea);
	//index_print(pilea);
	set_binary_index(pilea);
	//binary_print(pilea);

	sort_piles(&pilea, &pileb);
	//printf("test_after_set\n");
	//index_print(pilea);
	//stack_print(pilea);
	
	
	
	return (0);
}
	/*
	if (stack_is_sorted(pilea))
	{
		ft_putstr(" is sorted\n");
		return (EXIT_SUCCESS);
	}
	ft_putstr("not sorted\n");
	
	creer pile b (vide)
	print pile a
	print pile b
	ra()*/
	
	//stack_print(pilea);
	/*printf("ok111");
	pilea = reverse_rotate(pilea);
	printf("ok");	
	stack_print(pilea);*/
	/*pilea = rotate(pilea);	
	stack_print(pilea);
	pilea = rotate(pilea);	
	stack_print(pilea);*/
	
	// print pile a
	// print pile b


	
	//trier pile

	
