/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:02:52 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 16:45:59 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_error(int ac, char **av, int startindex)
{
	if (!no_error_in_args(ac, av, startindex))
	{
		if (ac == 2)
			ft_free_tab_strs(av);
		exit(EXIT_FAILURE);
	}
}

int	nbr_only(int ac, char **av, int startindex)
{
	int	i;
	int	j;

	i = startindex;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-')
			j++;
		while (av[i][j])
		{
			if ((av[i][j] >= '0' && av[i][j] <= '9')
					|| av[i][j] == ' ')
				j++;
			else
			{
				ft_putstr("Error\n");
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	no_error_in_args(int ac, char **av, int startindex)
{
	if (nbr_only(ac, av, startindex) == 0)
		return (0);
	else if (tous_les_strs_entrent_dans_int(ac, av, startindex) == 0)
		return (0);
	else if (no_double(ac, av, startindex) == 0)
		return (0);
	else
		return (1);
}
