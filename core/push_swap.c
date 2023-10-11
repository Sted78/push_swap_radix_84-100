/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:40:46 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/11 14:26:30 by svanmarc         ###   ########.fr       */
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
	if (ac == 1)//coupler avec sorted
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
	ft_print_strs(new_av);
	if (!no_error_in_args(new_ac, new_av, startindex))
	{
		printf("EXIT_FAILURE\n");
		return (EXIT_FAILURE);
	}

	
	ft_putstr("jusqu'ici tout va bien\n");

	
	pilea = create_stack_a(new_ac, new_av, startindex);
	
	//t_stack	*pilea = create_stack_a(new_ac, new_av, startindex);
	stack_print(pilea);
	printf("test1\n");

	//pilea = rotate(pilea);
	
	//pilea = reverse_rotate(pilea);
	//pilea = test_previous_fct(pilea);
	//pilea = swap(pilea);
	pilea = push(&pilea, pileb);
	stack_print(pilea);
	printf("testa\n");
	stack_print(pileb);
	printf("testb\n");



	
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

	
