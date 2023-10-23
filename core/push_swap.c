/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:40:46 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/23 09:14:59 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	set_new_ac(int ac, char **av)
{
	int		new_ac;

	new_ac = ac;
	if (ac == 1)
		exit(EXIT_SUCCESS);
	else if (ac == 2)
	{
		new_ac = count_nbrs(av[1], ' ');
	}
	return (new_ac);
}

char	**set_new_av(int ac, char **av)
{
	char	**new_av;

	new_av = av;
	if (ac == 2)
		new_av = ft_split(av[1], ' ');
	if (!no_error_in_args(ac, new_av, 0))
	{
		if (ac == 2)
			ft_free_tab_strs(new_av);
		exit(EXIT_FAILURE);
	}
	return (new_av);
}

int	main(int ac, char **av)
{
	int		new_ac;
	char	**new_av;
	int		startindex;
	t_stack	*pilea;
	t_stack	*pileb;

	pilea = NULL;
	pileb = NULL;
	startindex = 0;
	if (ac > 2)
		startindex = 1;
	new_av = set_new_av(ac, av);
	new_ac = set_new_ac(ac, av);
	check_error(new_ac, new_av, startindex);
	pilea = create_stack_a(new_ac, new_av, startindex);
	set_index_pile(pilea);
	set_binary_index(pilea);
	sort_piles(&pilea, &pileb);
	free_stack(pilea);
	free_stack(pileb);
	if (ac == 2)
		ft_free_tab_strs(new_av);
	return (0);
}
